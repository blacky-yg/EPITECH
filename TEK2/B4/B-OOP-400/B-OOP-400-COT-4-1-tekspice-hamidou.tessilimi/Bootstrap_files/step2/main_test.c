/******************************************************************************/
/*                                                                            */
/*                        main_test.c for the list project                    */
/*                        Made by David GIRON and Maxime MONTINET             */
/*                                                                            */
/******************************************************************************/

#include <stdio.h> /* printf */
#include <stdlib.h> /* NULL */
#include <string.h> /* strlen */
#include <assert.h> /* assert */

#include "list.h"
#include "item.h"

static void test_new_default()
{
	struct list * list = NULL;

	list = new_list_by_default();
	assert(list->len == 0);
	assert(list->empty == 1);
	assert(list->head == NULL);
	assert(list->tail == NULL);
}

static void test_populate_front()
{
	struct list * list = NULL;
	char* test_contents[] = {"ga", "bu", "zo", "meu"};
	int test_lens[] = {2, 2, 2, 3};
	int test_qty = 4;
	int i;

	list = new_list_by_default();
	assert(list->len == 0);

	for (i = 0; i < test_qty; ++i)
	{
		list_add_front(list, test_contents[i], test_lens[i]);
		assert(list->len = i + 1);
		assert(list_mem(list, test_contents[i], test_lens[i]) == 1);
	}
	assert(list->tail->len == test_lens[0]);
	assert(list->head->len == test_lens[test_qty - 1]);
}

static void test_populate_back()
{
	struct list * list = NULL;
	char* test_contents[] = {"ga", "bu", "zo", "meu"};
	int test_lens[] = {2, 2, 2, 3};
	int test_qty = 4;
	int i;

	list = new_list_by_default();
	assert(list->len == 0);

	for (i = 0; i < test_qty; ++i)
	{
		list_add_back(list, test_contents[i], test_lens[i]);
		assert(list->len = i + 1);
		assert(list_mem(list, test_contents[i], test_lens[i]) == 1);
	}
	assert(list->tail->len == test_lens[test_qty - 1]);
	assert(list->head->len == test_lens[0]);
}

static void test_mem()
{
	struct list * list = NULL;

	list = new_list_by_default();

	assert(list_mem(list, "toto", 4) == 0);
	list_add_front(list, "toto", 4);
	assert(list_mem(list, "toto", 4) == 1);
}

static struct item * double_len(void * content, int len)
{
	struct item * ret;

	ret = new_item_by_param(content, len * 2);

	return ret;
}

static void test_map()
{
	struct list * list = NULL;
	struct item * cur = NULL;
	struct list * ret = NULL;
	char* test_contents[] = {"ga", "bu", "zo", "meu"};
	int test_lens[] = {2, 2, 2, 3};
	int test_qty = 4;
	int i;

	list = new_list_by_default();

	for (i = 0; i < test_qty; ++i)
	{
		list_add_back(list, test_contents[i], test_lens[i]);
	}

	ret = list_map(list, &double_len);
	assert(ret->len = list->len);
	assert(ret != list);

	cur = ret->head;
	for (i = 0; i < test_qty; ++i)
	{
		assert(cur != NULL);
		assert(cur->len == test_lens[i] * 2);
		cur = cur->next;
	}
}

int main()
{
	test_new_default();
	test_populate_front();
	test_populate_back();
	test_mem();
	test_map();
	printf("All tests OK\n");

	return 0;
}

