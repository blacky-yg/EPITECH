/******************************************************************************/
/*                                                                            */
/*                    list.h for the list project                             */
/*                    Made by David GIRON et Maxime MONTINET                  */
/*                                                                            */
/******************************************************************************/

/**
 * @file
 * @author David Giron <giron_d@epitech.net>
 * @section DESCRIPTION
 *
 * Generic item structure and related functions.
 * This is an item for double-chained lists
 */

#ifndef ITEM_H
# define ITEM_H

struct			item
{
  void *		content;
  int			len;
  struct item *		prev;
  struct item *		next;
};

/**
 * Allocates a new item on the heap.
 * Returns NULL in case of error.
 */
struct item *	alloc_item(void);

/**
 * Initializes the values of a newly allocated item.
 * Sets all values to their default.
 *
 * @param the_item The item to initialize
 */
struct item *	init_item_by_default(struct item *the_item);

/**
 * Initializes the values of a newly allocated item.
 * Sets content and length to the passed parameters.
 *
 * @param the_item The item to initialize
 * @param content The content to use for the item. Must be a pointer to a
 * readable space
 * @param len Length of the content parameter.
 */
struct item *	init_item_by_param(struct item * the_item, void * content, int len);

/**
 * Initializes the values of a newly allocated item.
 * Copies the values of the source item.
 *
 * @param the_item The item to initialize.
 * @param src_item Irem to copy the attributes from.
 */
struct item *	init_item_by_copy(struct item * the_item, struct item * src_item);

/**
 * Completely constructs a new item.
 * Returns NULL in case of error.
 * All values are default.
 */
struct item *	new_item_by_default(void);

/**
 * Completely constructs a new item.
 * Returns NULL in case of error.
 * Sets the values from the parameters.
 *
 * @param src_content The content to use for the item. Must be a pointer to a
 * readable space
 * @param src_len Length of the content parameter.
 */
struct item *	new_item_by_param(void * src_content, int src_len);

/**
 * Completely constructs a new item.
 * Returns NULL in case of error.
 * Copies values from src_item
 *
 * @param src_item Item to copy the attributes from
 */
struct item *	new_item_by_copy(struct item * src_item);

/**
 * Deletes an item, and also frees its content parameter
 */
int		delete_item(struct item * the_item);



#endif /* ITEM_H                                                              */
