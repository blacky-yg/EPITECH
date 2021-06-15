/******************************************************************************/
/*                                                                            */
/*                        list.hh for the list project                        */
/*                        made by maxime montinet                             */
/*                                                                            */
/******************************************************************************/

#ifndef __LIST_HH__
# define __LIST_HH__

/**
 * @file
 * @author Maxime Montinet <montin_m@epitech.net>
 * @section DESCRIPTION
 *
 * List class for a "dumb" generic chained list
 */

class Item;

class List
{
    private:
        unsigned int    len_;
        bool            empty_;
        Item*           head_;
        Item*           tail_;

    public:
        /**
         * Constructor. Makes an empty list
         */
        List();

        /**
         * Destructor
         */
        ~List();

        /**
         * Adds a new item in the list
         * The item is constructed from the content and len parameters.
         * The new item is put to the front of the list.
         *
         * @param data Pointer to the content of the item
         * @param len Length of the content of the item
         */
        void add_front(void *, int);
        /**
         * Adds a new item in the list.
         * The item is constructed by copying the passed item.
         * The new item is put to the front of the list.
         *
         * @param item The item to copy
         */
        void add_front(Item*);

        /**
         * Adds a new item in the list
         * The item is constructed from the content and len parameters.
         * The new item is put to the back of the list.
         *
         * @param data Pointer to the content of the item
         * @param len Length of the content of the item
         */
        void add_back(void *, int);

        /**
         * Adds a new item in the list.
         * The item is constructed by copying the passed item.
         * The new item is put to the back of the list.
         *
         * @param item The item to copy
         */
        void add_back(Item*);

        /**
         * Tests whether an item is in the list.
         * Determines equality with a bitwise comparison of the pointed content.
         *
         * @param content Pointer to the content to search for
         * @param len Length of the searched content
         */
        bool mem(void * content, int len) const;

        /**
         * Applies a function to all items in the list
         *
         * @param f Pointer to the function to apply
         */
        void iter(void (*f)(void *, int));

        /**
         * Returns a new list composed of the consecutive results of calling the passed function
         * on each item of the passed list.
         * Ordering stays the same.
         *
         * @param f Pointer to the function used to construct result items
         */
        List* map(Item* (*f)(void *, int)) const;

        /**
         * Returns the length of the list
         */
        int getLen() const;

        /**
         * Returns true if and only if the list is empty
         */
        bool isEmpty() const;

        /**
         * Returns a pointer to the head item of the list
         */
        Item* getHead() const;

        /**
         * Returns a pointer to the tail item of the list
         */
        Item* getTail() const;

    private:
        void add_front_(Item*);
        void add_back_(Item*);
};

#endif
