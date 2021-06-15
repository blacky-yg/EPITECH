/******************************************************************************/
/*                                                                            */
/*                    list.hpp for the list project                           */
/*                    Made by David GIRON & Maxime MONTINET                   */
/*                                                                            */
/******************************************************************************/

/**
 * @file
 * @author Maxime Montinet <montin_m@epitech.net>
 * @section DESCRIPTION
 *
 * Template for a simple forward-chained list which can hold anything
 * Has a forward iterator and implements iter/mem/map algorithms
 */

#ifndef __LIST_HPP__
# define __LIST_HPP__


template<typename T>
class List
{
    public:
        struct Item
        {
            Item* next;
            T content;

            /**
             * Makes an item holding the passed content
             *
             * @param c The content to hold
             */
            Item(T const & c) : next(0), content(c) {}

            /**
             * Destructor
             */
            ~Item() {}
        };

        struct iterator
		{
        private:
            Item* p_;

        public:
            /**
             * Constructs a new iterator representing the end of the list
             */
            iterator() : p_(0) {}
            /**
             * Constructs a new iterator pointing to the passed item
             *
             * @param p Pointer to the concerned item
             */
            iterator(Item* p) : p_(p) {}
            /**
             * Constructs an iterator by copy
             *
             * @param other Iterator to copy from
             */
            iterator(iterator const & other) : p_(other.p_) {}
            /**
             * Post-incrementation operator
             */
            iterator& operator++(int) { iterator sav = *this; p_ = p_->next; return sav; }
            /**
             * Pre-incrementation operator
             */
            iterator operator++() { return (p_ = p_->next); }
            /**
             * Equality operator
             *
             * @param other Iterator to test for equality
             */
            bool operator==(iterator const & other) { return p_ == other.p_; }
            /**
             * Inequality operator
             *
             * @param other Iterator to test for inequality
             */
            bool operator!=(iterator const & other) { return p_ != other.p_; }
            /*
             * Dereferencing operator
             */
            T& operator*() { return p_->content; }
            /*
             * Dereferencing operator
             */
            T& operator->() { return p_->content; }
        };

    private:
        int      len_;
        Item*    head_;
        Item*    tail_;

    public:
        /**
         * Constructs a new, empty list
         */
        List() : len_(0), head_(0), tail_(0) {}
        /**
         * Destructor
         */
        ~List()
        {
            Item* cur = 0;
            Item* sav = 0;
            for (cur = head_; cur != 0;)
            {
                sav = cur;
                cur = cur->next;
                delete sav;
            }
        }

        /**
         * Return the length of the list
         */
        int getLen() const { return len_; }

        /**
         * Gets an iterator to the beginning of the list
         */
        iterator begin() { return iterator(this->head_); }
        /**
         * Gets an end iterator
         * It does NOT point to anything, you should stop iterating
         * when this is reached
         */
        iterator end() { return iterator(); }

        /**
         * Returns the front element of the list
         */
        T& front() { return this->head_->content; }

        /**
         * Returns the back element of the list
         */
        T& back() { return this->tail_->content; }

        /**
         * Pushes the parameter to the back of the list
         *
         * @param i Reference to the object to add
         */
        void push_back(T const & i)
        {
            Item* item = new Item(i);
            item->next = 0;
            if (this->tail_ != 0)
                this->tail_->next = item;
            if (this->head_ == 0)
                this->head_ = item;
            this->tail_ = item;
            this->len_ += 1;
        }

        /**
         * Pushes the parameter to the front of the list
         *
         * @param i Reference to the object to add
         */
        void push_front(T const & i)
        {
            Item* item = new Item(i);
            item->next = this->head_;
            if (this->tail_ == 0)
                this->tail_ = item;
            this->head_ = item;
            this->len_ += 1;
        }

        /**
         * Tests if given object is a member of the list
         *
         * @param i The object to search for
         */
        bool mem(T const& i)
        {
            iterator it = begin();
            iterator ite = end();

            for (; it != ite; ++it)
                if (*it == i)
                    return true;
            return false;
        }

        /**
         * Iterates on the list and applies function f to all items
         *
         * @param f The function to apply
         */
        void iter(void (*f)(T&))
        {
            iterator it = begin();
            iterator ite = end();

            for (; it != ite; ++it)
                f(*it);
        }

        /**
         * Iterates on the list applying f on all items, and constructs
         * a new list from the results.
         * The resulting list has the same order as this list.
         *
         * @param f The function to apply. Must return an instance of held type
         */
        List<T>* map(T (*f)(T&))
        {
            iterator it = begin();
            iterator ite = end();

            List<T>* ret = new List<T>();

            for (; it != ite; ++it)
                ret->push_back(f(*it));
            return ret;
        }
};

#endif
