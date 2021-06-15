/******************************************************************************/
/*                                                                            */
/*                   item.h for the list project                              */
/*                   Made by David GIRON & Maxime MONTINET                    */
/*                                                                            */
/******************************************************************************/



#include <stdlib.h> /* malloc, free                                           */

#include <string.h>
#include <stdio.h>

#include "item.h"
#include "list.h"



static void list_add_front_copy(struct list * this, struct item * item);
static void list_add_back_copy(struct list * this, struct item * item);
static void list_add_front(struct list * this, void * data, int len);
static void list_add_back(struct list * this, void * data, int len);
static int  list_mem(struct list * this, void * content, int len);
static void list_iter(struct list * this, void (*f)(void*, int));
static struct list * list_map(struct list * this, struct item * (*f)(void *, int));



static struct list *	alloc_list()
{
  struct list *	list = NULL;

  list = (struct list *) malloc(1 * sizeof(*list));
  return list;
}

static void	init_list_by_default(struct list * this)
{
  if (this != NULL)
    {
      this->len = 0;
      this->empty = 1;
      this->head = NULL;
      this->tail = NULL;

      this->add_front_copy = &list_add_front_copy;
      this->add_back_copy = &list_add_back_copy;
      this->add_front = &list_add_front;
      this->add_back = &list_add_back;
      this->mem = &list_mem;
      this->iter = &list_iter;
      this->map = &list_map;
    }
}

struct list *	new_list_by_default()
{
	struct list *	list = NULL;

	list = alloc_list();
	if (list != NULL)
		init_list_by_default(list);
	return list;
}


static int	delete_list_items(struct item * the_item)
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

void	delete_list(struct list * this)
{
  if (this != NULL)
    {
      if (this->empty == 0)
	{
	  delete_list_items(this->head);
	  this->len = 0;
	  this->empty = 1;
	  this->head = NULL;
	  this->tail = NULL;
	}
      free(this);
    }
}


static void	list_add_front_real(struct list * this, struct item * item)
{
  if (this != NULL)
    {
      if (item != NULL)
	{
	  item->prev = NULL;
	  item->next = this->head;
	  if (this->head != NULL)
	    this->head->prev = item;
	  if (this->tail == NULL)
	    this->tail = item;
	  this->head = item;
	  this->len += 1;
	  this->empty = 0;	    
	}
    }
}

static void	list_add_back_real(struct list * this, struct item * item)
{
  if (this != NULL)
    {
      if (item != NULL)
	{
	  item->prev = this->tail;
	  item->next = NULL;
	  if (this->tail != NULL)
	    this->tail->next = item;
	  if (this->head == NULL)
	    this->head = item;
	  this->tail = item;
	  this->len += 1;
	  this->empty = 0;	    
	}
    }
}

static void	list_add_front_copy(struct list * this, struct item * item)
{
  list_add_front_real(this, new_item_by_copy(item));
}

static void	list_add_back_copy(struct list * this, struct item * item)
{
  list_add_back_real(this, new_item_by_copy(item));
}

static void	list_add_front(struct list * this, void *data, int len)
{
  list_add_front_real(this, new_item_by_param(data, len));
}

static void	list_add_back(struct list * this, void *data, int len)
{
  list_add_back_real(this, new_item_by_param(data, len));
}


static void	list_iter(struct list * this, void (*f)(void *, int))
{
  struct item *   current = NULL;

  if (this != NULL && f != NULL)
    {
      current = this->head;
      while (current != NULL)
	{
	  f(current->content, current->len);
	  current = current->next;
	}
    }
  return;
}

static int	list_mem(struct list * this, void * content, int len)
{
  int i;
  struct item * current = NULL;

  if (len == 0 || content == NULL)
    {
      return 0;
    }

  if (this != NULL)
    {
      current = this->head;
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

static struct list *	list_map(struct list * this, struct item * (*f)(void *, int))
{
  struct list * ret = NULL;
  struct item * current = NULL;
  struct item * tmp = NULL;

  ret = new_list_by_default();

  if (this != NULL)
    {
      current = this->head;
      while (current != NULL)
	{
	  tmp = f(current->content, current->len);
	  list_add_back_real(ret, tmp);
	  current = current->next;
	}
    }
  return ret;
}
