/******************************************************************************/
/*                                                                            */
/*                   item.h for the list project                              */
/*                   Made by David GIRON & Maxime MONTINET                    */
/*                                                                            */
/******************************************************************************/

/**
 * @file
 * @author Maxime Montinet <montin_m@epitech.net>
 * @section DESCRIPTION
 *
 * Generic item structure and related functions.
 * This is an item for double-chained lists, written in an object-style C
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
int   delete_item(struct item *);

#endif /* ITEM_H                                                              */
