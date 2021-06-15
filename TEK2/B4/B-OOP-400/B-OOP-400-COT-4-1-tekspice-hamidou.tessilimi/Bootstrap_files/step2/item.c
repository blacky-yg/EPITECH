/******************************************************************************/
/*                                                                            */
/*                    list.h for the list project                             */
/*                    Made by David GIRON et Maxime MONTINET                  */
/*                                                                            */
/******************************************************************************/



#include <stdlib.h> /* malloc, free                                           */
#include <string.h> /* memcpy                                                 */

#include "item.h"



struct item *	alloc_item(void)
{
	struct item *	item = NULL;

	item = (struct item *) malloc(1 * sizeof(*item));
	return item;
}


struct item *	init_item_by_default(struct item *the_item)
{
	if (the_item != NULL)
	{
		the_item->content = NULL;
		the_item->len = -1;
		the_item->prev = NULL;
		the_item->next = NULL;
	}
	return the_item;
}

struct item *	init_item_by_param(struct item * the_item, void * src_content, int src_len)
{
	if (the_item != NULL)
	{
		the_item = init_item_by_default(the_item);
		if (src_content != NULL && src_len > 0)
		{
			the_item->content = malloc(src_len);
			if (the_item->content != NULL)
			{
				the_item->content = memcpy(the_item->content, src_content, src_len);
				the_item->len = src_len;
			}
		}
	}
	return the_item;
}

struct item *	init_item_by_copy(struct item * the_item, struct item * src_item)
{
	if (the_item != NULL)
	{
		the_item = init_item_by_default(the_item);
		if (src_item != NULL)
			the_item = init_item_by_param(the_item, src_item->content, src_item->len);
	}
	return the_item;
}


struct item *	new_item_by_default(void)
{
	struct item *	item = NULL;

	item = alloc_item();
	if (item != NULL)
		item = init_item_by_default(item);
	return item;
}

struct item *	new_item_by_param(void * src_content, int src_len)
{
	struct item *	item = NULL;

	item = alloc_item();
	if (item != NULL)
		item = init_item_by_param(item, src_content, src_len);
	return item;
}

struct item *	new_item_by_copy(struct item * src_item)
{
	struct item *	item = NULL;

	item = alloc_item();
	if (item != NULL)
		item = init_item_by_copy(item, src_item);
	return item;
}


int		delete_item(struct item * the_item)
{
	if (the_item != NULL)
	{
		if (the_item->content != NULL)
			free(the_item->content);
		free(the_item);
	}
	return 0;
}
