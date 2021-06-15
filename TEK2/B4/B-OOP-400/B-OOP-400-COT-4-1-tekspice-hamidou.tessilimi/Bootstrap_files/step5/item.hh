/******************************************************************************/
/*                                                                            */
/*                  item.hh for the list project                              */
/*                  made by David Giron & Maxime Montinet                     */
/*                                                                            */
/******************************************************************************/

/**
 * @file
 * @author Maxime Montinet <montin_m@epitech.net>
 * @section DESCRIPTION
 *
 * Item base class for a polymorphic generic chained list
 */

#ifndef __ITEM_HH__
# define __ITEM_HH__

class Item
{
    private:
        Item* prev_;
        Item* next_;

    public:
        /**
         * Default constructor. Makes an empty item
         */
        Item();

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
         * Comparison operator.
         * Must be implemented by subclass
         *
         * @param other Reference to item to test for equality
         */
        virtual bool    operator==(Item const & other) const = 0;

        /**
         * Subclass must implement and say nice things on std::cout
         * to identify itself
         */
        virtual void    identify() const = 0;
};

#endif

