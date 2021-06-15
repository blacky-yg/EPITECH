/******************************************************************************/
/*                                                                            */
/*                        item.cc for the list project                        */
/*                        made by David GIRON and Maxime MONTINET             */
/*                                                                            */
/******************************************************************************/

#include <cstring> /* memcpy */
#include "item.hh"

Item::Item() : len_(0), content_(0), prev_(0), next_(0)
{
}

Item::Item(void* data, int len) : len_(len), content_(0), prev_(0), next_(0)
{
    this->content_ = new char[this->len_];
    memcpy(this->content_, data, this->len_);
}

Item::Item(Item const & other) : len_(other.len_), content_(0), prev_(0), next_(0)
{
    this->content_ = new char[this->len_];
    memcpy(this->content_, other.content_, this->len_);
}

Item::~Item()
{
    if (this->content_ != 0)
        delete [] static_cast<char*>(this->content_);
}

Item* Item::getNext() const
{
  return this->next_;
}

void Item::setNext(Item * n)
{
  this->next_ = n;
}

Item* Item::getPrev() const
{
  return this->prev_;
}

void Item::setPrev(Item * n)
{
  this->prev_ = n;
}

int Item::getLen() const 
{
  return this->len_;
}

void * Item::getContent() const
{
  return this->content_;
}

bool Item::equals(void * data, int len) const
{
    if (this->len_ != len)
        return false;
    for (int i = 0; i < this->len_; ++i)
        if (static_cast<char*>(this->content_)[i] != static_cast<char*>(data)[i])
            return false;
    return true;
}
