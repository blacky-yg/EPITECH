/******************************************************************************/
/*                                                                            */
/*                  list.hh for the list project                              */
/*                  made by David Giron & Maxime Montinet                     */
/*                                                                            */
/******************************************************************************/

/**
 * @file
 * @author Maxime Montinet <montin_m@epitech.net>
 * @section DESCRIPTION
 *
 * List class for a polymorphic generic chained list
 */

#ifndef __LIST_HH__
# define __LIST_HH__

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
         * Adds a new item in the list.
         * The item is constructed by copying the passed item.
         * The new item is put to the front of the list.
         *
         * @param item The item to copy
         */
        void add_front(Item*);

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
         * @param other Reference to an item to test for
         */
        bool mem(Item const & other) const;

        /**
         * Applies a function to all items in the list
         *
         * @param f Pointer to the function to apply
         */
        void iter(void (*f)(Item const &));

        /**
         * Returns a new list composed of the consecutive results of calling the passed function
         * on each item of the passed list.
         * Ordering stays the same.
         *
         * @param f Pointer to the function used to construct result items
         */
        List* map(Item* (*f)(Item const &)) const;

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
};

#endif
