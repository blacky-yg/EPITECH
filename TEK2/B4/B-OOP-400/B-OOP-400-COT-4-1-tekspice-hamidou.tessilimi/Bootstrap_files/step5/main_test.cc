/******************************************************************************/
/*                                                                            */
/*                        main_test.c for the list project                    */
/*                        Made by David GIRON and Maxime MONTINET             */
/*                                                                            */
/******************************************************************************/

#include <cassert>
#include <iostream>

#include "list.hh"
#include "item.hh"

class TestItem : public Item
{
    private:
        int a_;

    public:
        TestItem(int a) : a_(a) {}
        bool operator==(Item const & other) const
        {
            TestItem const * tmp = dynamic_cast<TestItem const *>(&other);
            if (tmp == 0)
                return false;
            if (tmp->a_ != this->a_)
                return false;
            return true;
        }

        void identify() const
        {
            std::cout << "TestItem " << a_ << std::endl;
        }
};

static void test_new_default()
{
    List* list = new List();

    assert(list->getLen() == 0);
    assert(list->isEmpty());
    assert(list->getHead() == 0);
    assert(list->getTail() == 0);

    delete list;
}

static void test_populate_front()
{
    List* list = new List();

    assert(list->getLen() == 0);

    for (int i = 0; i < 4; ++i)
    {
        list->add_front(new TestItem(i));
        assert(list->getLen() == i + 1);
        assert(list->mem(TestItem(i)));
    }
    assert(*(list->getTail()) == TestItem(0));
    assert(*(list->getHead()) == TestItem(3));
}

static void test_populate_back()
{
    List* list = new List();

    assert(list->getLen() == 0);

    for (int i = 0; i < 4; ++i)
    {
        list->add_back(new TestItem(i));
        assert(list->getLen() == i + 1);
        assert(list->mem(TestItem(i)));
    }
    assert(*(list->getTail()) == TestItem(3));
    assert(*(list->getHead()) == TestItem(0));
}

static void test_mem()
{
    List* list = new List();
    assert(list->mem(TestItem(42)) == false);
    list->add_front(new TestItem(42));
    assert(list->mem(TestItem(42)));
}

static Item * double_len(Item const &)
{
    Item * ret = new TestItem(4);

    return ret;
}

static void test_map()
{
    List * list = new List();
    for (int i = 0; i < 4; ++i)
        list->add_back(new TestItem(i));
    List* ret = list->map(&double_len);
    assert(ret->getLen() == list->getLen());
    assert(ret != list);
    Item* cur = const_cast<Item *>(ret->getHead()); // For testing purposes only
    for (int i = 0; cur != 0; cur = cur->getNext(), ++i)
    {
        assert(*cur == TestItem(4));
    }
}

int main()
{
    test_new_default();
    test_populate_front();
    test_populate_back();
    test_mem();
    test_map();
    std::cout << "All tests OK" << std::endl;

    return 0;
}

