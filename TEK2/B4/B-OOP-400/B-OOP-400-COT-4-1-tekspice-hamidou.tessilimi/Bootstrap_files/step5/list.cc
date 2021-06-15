/******************************************************************************/
/*                                                                            */
/*                  list.cc for the list project                              */
/*                  made by David Giron & Maxime Montinet                     */
/*                                                                            */
/******************************************************************************/

#include "list.hh"
#include "item.hh"

List::List()
: len_(0), empty_(true), head_(0), tail_(0)
{
}

List::~List()
{
    Item* sav = 0;
    for (Item* cur = this->head_; cur != 0;)
    {
        sav = cur;
        cur = cur->getNext();
        delete sav;
    }
}

void List::add_front(Item* item)
{
    if (item != 0)
    {
        item->setPrev(0);
        item->setNext(this->head_);
        if (this->head_ != 0)
            this->head_->setPrev(item);
        if (this->tail_ == 0)
            this->tail_ = item;
        this->head_ = item;
        this->len_ += 1;
        this->empty_ = false;
    }
}

void List::add_back(Item* item)
{
    if (item != 0)
    {
        item->setPrev(this->tail_);
        item->setNext(0);
        if (this->tail_ != 0)
            this->tail_->setNext(item);
        if (this->head_ == 0)
            this->head_ = item;
        this->tail_ = item;
        this->len_ += 1;
        this->empty_ = 0;
    }
}

bool List::mem(Item const & other) const
{
    for (Item* cur = this->head_; cur != 0; cur = cur->getNext())
        if (*cur == other)
            return true;
    return false;
}

void List::iter(void (*f)(Item const &))
{
    for (Item * cur = this->head_; cur != 0; cur = cur->getNext())
        f(*cur);
}

List* List::map(Item* (*f)(Item const &)) const
{
    List* ret = new List();

    for (Item* cur = this->head_; cur != 0; cur = cur->getNext())
    {
        Item* tmp = f(*cur);
        ret->add_back(tmp);
    }

    return ret;
}

int List::getLen() const
{
  return this->len_;
}

bool List::isEmpty() const
{
  return this->empty_;
}

Item * List::getHead() const
{
  return this->head_;
}

Item * List::getTail() const
{
  return this->tail_;
}
