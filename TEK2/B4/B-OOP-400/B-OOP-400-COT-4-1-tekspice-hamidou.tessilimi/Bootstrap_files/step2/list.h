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
 * List structure destined to hold double-chained items, and related functions
 */

#ifndef LIST_H
# define LIST_H

struct			list
{
  int			len;
  int			empty;
  struct item *		head;
  struct item *		tail;
};

/**
 * Allocates a new list on the heap
 * Returns NULL in case of error.
 */
struct list *	alloc_list(void);

/**
 * Initializes a newly allocated list.
 *
 * @param the_list The list to initialize
 */
struct list *	init_list_by_default(struct list * the_list);

/**
 * Completely constructs a new empty list.
 */
struct list *	new_list_by_default(void);

/**
 * Completely deletes the passed list, including all its items.
 *
 * @param the_list The list to delete
 */
int				delete_list(struct list * the_list);

/**
 * Adds a new item in the list.
 * The item is constructed by copying the passed item.
 * The new item is put to the front of the list.
 *
 * @param the_list The list to add an item to
 * @param item The item to copy
 */
int				list_add_front_copy(struct list * the_list, struct item * item);

/**
 * Adds a new item in the list.
 * The item is constructed by copying the passed item.
 * The new item is put to the back of the list.
 *
 * @param the_list The list to add an item to
 * @param item The item to copy
 */
int				list_add_back_copy(struct list * the_list, struct item * item);

/**
 * Adds a new item in the list
 * The item is constructed from the content and len parameters.
 * The new item is put to the front of the list.
 *
 * @param the_list The list to add an item to
 * @param data Pointer to the content of the item
 * @param len Length of the content of the item
 */
int				list_add_front(struct list * the_list, void *data, int len);

/**
 * Adds a new item in the list
 * The item is constructed from the content and len parameters.
 * The new item is put to the back of the list.
 *
 * @param the_list The list to add an item to
 * @param data Pointer to the content of the item
 * @param len Length of the content of the item
 */
int				list_add_back(struct list * the_list, void *data, int len);

/**
 * Tests whether an item is in the list.
 * Determines equality with a bitwise comparison of the pointed content.
 *
 * @param the_list The list to search
 * @param content Pointer to the content to search for
 * @param len Length of the searched content
 */
int				list_mem(struct list * the_list, void * content, int len);

/**
 * Applies a function to all items in the list
 *
 * @param the_list The list to iterate on
 * @param f Pointer to the function to apply
 */
void			list_iter(struct list * the_list, void (*f)(void *, int));

/**
 * Returns a new list composed of the consecutive results of calling the passed function
 * on each item of the passed list.
 * Ordering stays the same.
 *
 * @param the_list The list to take source values from
 * @param f Pointer to the function used to construct result items
 */
struct list *	list_map(struct list * the_list, struct item * (*f)(void *, int));

#endif /* LIST_H                                                              */
