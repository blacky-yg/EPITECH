/******************************************************************************/
/*                                                                            */
/*                   item.cc for the list project                             */
/*                   made by David Giron & Maxime Montinet                    */
/*                                                                            */
/******************************************************************************/

#include <cstring> /* memcpy */
#include "item.hh"

Item::Item() : prev_(0), next_(0)
{
}

Item::Item(Item const & other) : prev_(0), next_(0)
{
}

Item::~Item()
{
}

Item * Item::getNext() const
{
  return this->next_;
}

void Item::setNext(Item * n)
{
  this->next_ = n;
}

Item * Item::getPrev() const
{
  return this->prev_; 
}

void Item::setPrev(Item* n)
{
  this->prev_ = n; 
}
