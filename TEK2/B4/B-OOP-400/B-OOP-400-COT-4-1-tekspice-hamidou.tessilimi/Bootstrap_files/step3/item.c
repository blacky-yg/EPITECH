/******************************************************************************/
/*                                                                            */
/*                   item.h for the list project                              */
/*                   Made by David GIRON & Maxime MONTINET                    */
/*                                                                            */
/******************************************************************************/


#include <stdlib.h> /* malloc, free                                           */
#include <string.h> /* memcpy                                                 */

#include "item.h"


static struct item *	alloc_item(void)
{
  struct item *	item = NULL;

  item = (struct item *) malloc(1 * sizeof(*item));
  return item;
}


static void	init_item_by_default(struct item *this)
{
  if (this != NULL)
    {
      this->content = NULL;
      this->len = -1;
      this->prev = NULL;
      this->next = NULL;
    }
}

static void	init_item_by_param(struct item * this, void * src_content, int src_len)
{
  if (this != NULL)
    {
      init_item_by_default(this);
      if (src_content != NULL && src_len > 0)
	{
	  this->content = malloc(src_len);
	  if (this->content != NULL)
	    {
	      this->content = memcpy(this->content, src_content, src_len);
	      this->len = src_len;
	    }
	}
    }
}

static void	init_item_by_copy(struct item * this, struct item * src_item)
{
  if (this != NULL)
    {
      init_item_by_default(this);
      if (src_item != NULL)
	init_item_by_param(this, src_item->content, src_item->len);
    }
}


struct item *	new_item_by_default(void)
{
  struct item *	item = NULL;

  item = alloc_item();
  if (item != NULL)
    init_item_by_default(item);
  return item;
}

struct item *	new_item_by_param(void * src_content, int src_len)
{
  struct item *	item = NULL;

  item = alloc_item();
  if (item != NULL)
    init_item_by_param(item, src_content, src_len);
  return item;
}

struct item *	new_item_by_copy(struct item * src_item)
{
  struct item *	item = NULL;

  item = alloc_item();
  if (item != NULL)
    init_item_by_copy(item, src_item);
  return item;
}


int	delete_item(struct item * this)
{
  if (this != NULL)
    {
      if (this->content != NULL)
	free(this->content);
      free(this);
    }
  return 0;
}
