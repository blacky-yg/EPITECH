/******************************************************************************/
/*                                                                            */
/*                        list.cc for the list project                        */
/*                        made by David GIRON and Maxime MONTINET             */
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

void List::add_front_(Item * item)
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

void List::add_back_(Item * item)
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

void List::add_front(void* data, int len)
{
    this->add_front_(new Item(data, len));
}

void List::add_front(Item * item)
{
    this->add_front_(new Item(*item));
}

void List::add_back(void* data, int len)
{
    this->add_back_(new Item(data, len));
}

void List::add_back(Item * item)
{
    this->add_back_(new Item(*item));
}

bool List::mem(void* data, int len) const
{
    for (Item* cur = this->head_; cur != 0; cur = cur->getNext())
        if (cur->equals(data, len))
            return true;
    return false;
}

void List::iter(void (*f)(void *, int))
{
    for (Item * cur = this->head_; cur != 0; cur = cur->getNext())
        f(cur->getContent(), cur->getLen());
}

List* List::map(Item* (*f)(void *, int)) const
{
    List* ret = new List();

    for (Item* cur = this->head_; cur != 0; cur = cur->getNext())
    {
        Item* tmp = f(cur->getContent(), cur->getLen());
        ret->add_back_(tmp);
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
