/******************************************************************************/
/*                                                                            */
/*                     main_test.c for the list project                       */
/*                     Made by David GIRON et Maxime MONTINET                 */
/*                                                                            */
/******************************************************************************/

#include <stdio.h> /* printf */
#include <stdlib.h> /* NULL */
#include <string.h> /* strlen */
#include <assert.h> /* assert */

#include "list.h"

static void test_populate_list()
{
	struct list * lst = NULL;
	struct list * cur = NULL;

	my_put_in_list(&lst, "zaz", 42, "nah, too lazy to do that.");
	my_put_in_list(&lst, "jack", 84, "That's a RUMOR!");
	my_put_in_list(&lst, "thor", 168, "Proceed...");

	cur = lst;

	assert(cur->age = 42); cur = cur->next;
	assert(cur->age = 84); cur = cur->next;
	assert(cur->age = 168); cur = cur->next;

	assert(my_is_in_list(lst, "zaz") == 1);
	assert(my_is_in_list(lst, "jack") == 1);
	assert(my_is_in_list(lst, "thor") == 1);
}

int main()
{
	test_populate_list();
	printf("All tests OK\n");

	return 0;
}

