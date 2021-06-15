/******************************************************************************/
/*                                                                            */
/*                   list.c for the list project                              */
/*                   Made by David GIRON et Maxime MONTINET                   */
/*                                                                            */
/******************************************************************************/



#include <stdlib.h> /* malloc, free                                           */

#include <string.h>
#include <stdio.h>

#include "item.h"
#include "list.h"



struct list *	alloc_list()
{
	struct list *	list = NULL;

	list = (struct list *) malloc(1 * sizeof(*list));
	return list;
}


struct list *	init_list_by_default(struct list * the_list)
{
	if (the_list != NULL)
	{
		the_list->len = 0;
		the_list->empty = 1;
		the_list->head = NULL;
		the_list->tail = NULL;
	}
	return the_list;
}


struct list *	new_list_by_default()
{
	struct list *	list = NULL;

	list = alloc_list();
	if (list != NULL)
		list = init_list_by_default(list);
	return list;
}


static int		delete_list_items(struct item * the_item)
{
	if (the_item != NULL)
	{
		if (the_item->next != NULL)
			delete_list_items(the_item->next);
		else
		{
			delete_item(the_item);
			return 0;
		}
	}
	return 0;
}

int		delete_list(struct list * the_list)
{
	if (the_list != NULL)
	{
		if (the_list->empty == 0)
		{
			delete_list_items(the_list->head);
			the_list->len = 0;
			the_list->empty = 1;
			the_list->head = NULL;
			the_list->tail = NULL;
		}
		free(the_list);
	}
	return 0;
}


static int list_add_front_real(struct list * the_list, struct item * item)
{
	if (the_list != NULL)
	{
		if (item != NULL)
		{
			item->prev = NULL;
			item->next = the_list->head;
			if (the_list->head != NULL)
				the_list->head->prev = item;
			if (the_list->tail == NULL)
				the_list->tail = item;
			the_list->head = item;
			the_list->len += 1;
			the_list->empty = 0;	    
		}
	}
	return 0;
}

static int list_add_back_real(struct list * the_list, struct item * item)
{
	if (the_list != NULL)
	{
		if (item != NULL)
		{
			item->prev = the_list->tail;
			item->next = NULL;
			if (the_list->tail != NULL)
				the_list->tail->next = item;
			if (the_list->head == NULL)
				the_list->head = item;
			the_list->tail = item;
			the_list->len += 1;
			the_list->empty = 0;	    
		}
	}
	return 0;
}

int		list_add_front_copy(struct list * the_list, struct item * item)
{
	return list_add_front_real(the_list, new_item_by_copy(item));
}

int		list_add_back_copy(struct list * the_list, struct item * item)
{
	return list_add_back_real(the_list, new_item_by_copy(item));
}

int		list_add_front(struct list * the_list, void *data, int len)
{
	return list_add_front_real(the_list, new_item_by_param(data, len));
}

int		list_add_back(struct list * the_list, void *data, int len)
{
	return list_add_back_real(the_list, new_item_by_param(data, len));
}

void		list_iter(struct list * the_list, void (*f)(void *, int))
{
	struct item *   current = NULL;

	if (the_list != NULL && f != NULL)
	{
		current = the_list->head;
		while (current != NULL)
		{
			f(current->content, current->len);
			current = current->next;
		}
	}
	return;
}

int			list_mem(struct list * the_list, void * content, int len)
{
	int i;
	struct item * current = NULL;

	if (len == 0 || content == NULL)
	{
		return 0;
	}

	if (the_list != NULL)
	{
		current = the_list->head;
		while (current != NULL)
		{
			if (current->len == len)
			{
				for (i = 0; i < len; ++i)
				{
					if (((char*)content)[i] != ((char*)current->content)[i])
						break;
				}
				if (i == len)
					return 1;
			}
			current = current->next;
		}
	}
	return 0;
}

struct list * list_map(struct list * the_list, struct item * (*f)(void *, int))
{
	struct list * ret = NULL;
	struct item * current = NULL;
	struct item * tmp = NULL;

	ret = new_list_by_default();

	if (the_list != NULL)
	{
		current = the_list->head;
		while (current != NULL)
		{
			tmp = f(current->content, current->len);
			list_add_back_real(ret, tmp);
			current = current->next;
		}
	}
	return ret;
}
