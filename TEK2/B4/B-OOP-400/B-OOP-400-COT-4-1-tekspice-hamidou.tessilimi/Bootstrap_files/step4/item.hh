/******************************************************************************/
/*                                                                            */
/*                    item.hh for the list project                            */
/*                    made by David Giron & Maxime Montinet                   */
/*                                                                            */
/******************************************************************************/

/**
 * @file
 * @author Maxime Montinet <montin_m@epitech.net>
 * @section DESCRIPTION
 *
 * Item class for a "dump" generic chained list
 */
#ifndef __ITEM_HH__
# define __ITEM_HH__

class Item
{
    private:
        int len_;
        void* content_;
        Item* prev_;
        Item* next_;

    public:
        /**
         * Default constructor. Makes an empty item
         */
        Item();
        /**
         * Constructs an item with the given parameters
         *
         * @param content Pointer to the content of the item
         * @param len Length of the content
         */
        Item(void* content, int len);

        /**
         * Constructs an item by copy
         *
         * @param other The item to copy from
         */
        Item(Item const & other);

        /**
         * Destructor
         */
        ~Item();

        /**
         * Returns a pointer to the next item in the chain
         */
        Item*   getNext() const;

        /**
         * Sets the next item in the chain
         *
         * @param item The item to chain
         */
        void    setNext(Item* item);

        /**
         * Returns a pointer to the previous item in the chain
         */
        Item*   getPrev() const;

        /**
         * Sets the previous item in the chain
         *
         * @param item The item to chain
         */
        void    setPrev(Item* item);

        /**
         * Returns this item's content's length
         */
        int     getLen() const;

        /**
         * Returns this item's content
         */
        void*   getContent() const;

        /**
         * Tests whether this item's content equals the given one
         * Does so by bitwise comparison of the pointee
         *
         * @param content Pointer to the content to test for
         * @param len Length of the content to test for
         */
        bool    equals(void * content, int len) const;
};

#endif

