/******************************************************************************/
/*                                                                            */
/*                        main.c for the list project                         */
/*                        Made by David GIRON and Maxime MONTINET             */
/*                                                                            */
/******************************************************************************/

#include <stdio.h> /* printf */
#include <stdlib.h> /* NULL */
#include <string.h> /* strlen, strdup*/

#include "list.h"
#include "item.h"

struct koala
{
	char const * nom;
	int age;
	char const * catchphrase;
};

static void dump_string(void * content, int len)
{
	printf("  Content [%s], len [%d]\n", (char*)content, len);
}

static void dump_koala(void * content, int len)
{
	struct koala * bob = (struct koala *)content;
	(void)len;

	printf("  %s is %d years old and usually says \"%s\"\n", bob->nom, bob->age, bob->catchphrase);
}

static struct koala * make_koala(char const * nom, int age, char const * catchphrase)
{
	struct koala * ret = (struct koala *)malloc(1 * sizeof(*ret));

	ret->nom = nom;
	ret->age = age;
	ret->catchphrase = catchphrase;

	return ret;
}

int main()
{
	struct list * list = NULL;
	int i = 0;
	char* test_contents[] = {"ga", "bu", "zo", "meu"};
	int test_qty = 4;

	/*
	 * We create a list and fill it with a few test character
	 * strings
	 */
	list = new_list_by_default();
	for (i = 0; i < test_qty; ++i)
	{
		list_add_front(list, test_contents[i], strlen(test_contents[i]));
	}
	printf("Elements in the list:\n");
	list_iter(list, &dump_string);

	if (list_mem(list, "meu", 3))
		printf("[meu] is in the list (OK)\n");
	else
	{
		printf("[meu] isn't in the list, error!\n");
		return 1;
	}
	delete_list(list);

	/*
	 * We create another list and fill it with Koalas
	 */
	list = new_list_by_default();
	list_add_back(list, make_koala("zaz", 42, "nah, too lazy to do that."), sizeof(struct koala));
	list_add_back(list, make_koala("jack", 84, "That's a RUMOR!"), sizeof(struct koala));
	list_add_back(list, make_koala("thor", 168, "Proceed..."), sizeof(struct koala));
	printf("Koalas in the list:\n");
	list_iter(list, &dump_koala);

	delete_list(list);

	return 0;
}

