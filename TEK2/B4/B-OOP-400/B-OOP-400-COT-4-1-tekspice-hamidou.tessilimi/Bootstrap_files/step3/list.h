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
 * List structure destined to hold double-chained items.
 * Written in object-like C, with "member functions"
 */

#ifndef LIST_H
# define LIST_H

struct			list
{
    int			len;
    int			empty;
    struct item *		head;
    struct item *		tail;

    /**
     * "member function"
     * Adds a new item in the list.
     * The item is constructed by copying the passed item.
     * The new item is put to the front of the list.
     *
     * @param this The list to add an item to
     * @param item The item to copy
     */
    void (*add_front_copy)(struct list * this, struct item * item);

    /**
     * "member function"
     * Adds a new item in the list.
     * The item is constructed by copying the passed item.
     * The new item is put to the back of the list.
     *
     * @param this The list to add an item to
     * @param item The item to copy
     */
    void (*add_back_copy)(struct list * this, struct item * item);

    /**
     * "member function"
     * Adds a new item in the list
     * The item is constructed from the content and len parameters.
     * The new item is put to the front of the list.
     *
     * @param this The list to add an item to
     * @param data Pointer to the content of the item
     * @param len Length of the content of the item
     */
    void (*add_front)(struct list * this, void * data, int len);

    /**
     * "member function"
     * Adds a new item in the list
     * The item is constructed from the content and len parameters.
     * The new item is put to the back of the list.
     *
     * @param this The list to add an item to
     * @param data Pointer to the content of the item
     * @param len Length of the content of the item
     */
    void (*add_back)(struct list * this, void * data, int len);

    /**
     * "member function"
     * Tests whether an item is in the list.
     * Determines equality with a bitwise comparison of the pointed content.
     *
     * @param this The list to search
     * @param content Pointer to the content to search for
     * @param len Length of the searched content
     */
    int (*mem)(struct list * this, void * content, int len);

    /**
     * "member function"
     * Applies a function to all items in the list
     *
     * @param this The list to iterate on
     * @param f Pointer to the function to apply
     */
    void (*iter)(struct list * this, void (*f)(void*, int));

    /**
     * "member function"
     * Returns a new list composed of the consecutive results of calling the passed function
     * on each item of the passed list.
     * Ordering stays the same.
     *
     * @param this The list to take source values from
     * @param f Pointer to the function used to construct result items
     */
    struct list * (*map)(struct list * this, struct item * (*f)(void *, int));
};

/**
 * Completely constructs a new empty list.
 */
struct list *	new_list_by_default(void);

void delete_list(struct list * this);

#endif /* LIST_H                                                              */
