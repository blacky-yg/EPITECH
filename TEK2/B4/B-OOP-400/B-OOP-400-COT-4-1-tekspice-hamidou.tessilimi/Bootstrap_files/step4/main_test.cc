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
    char test_contents[][4] = {"ga", "bu", "zo", "meu"};
    int test_lens[] = {2, 2, 2, 3};
    int test_qty = 4;

    List* list = new List();

    assert(list->getLen() == 0);

    for (int i = 0; i < test_qty; ++i)
    {
        list->add_front(test_contents[i], test_lens[i]);
        assert(list->getLen() == i + 1);
        assert(list->mem(test_contents[i], test_lens[i]));
    }
    assert(list->getTail()->getLen() == test_lens[0]);
    assert(list->getHead()->getLen() == test_lens[test_qty - 1]);
}

static void test_populate_back()
{
    char test_contents[][4] = {"ga", "bu", "zo", "meu"};
    int test_lens[] = {2, 2, 2, 3};
    int test_qty = 4;

    List* list = new List();

    assert(list->getLen() == 0);

    for (int i = 0; i < test_qty; ++i)
    {
        list->add_back(test_contents[i], test_lens[i]);
        assert(list->getLen() == i + 1);
        assert(list->mem(test_contents[i], test_lens[i]));
    }
    assert(list->getTail()->getLen() == test_lens[test_qty - 1]);
    assert(list->getHead()->getLen() == test_lens[0]);
}

static void test_mem()
{
    List* list = new List();
    char t[] = "toto";
    assert(list->mem(t, 4) == false);
    list->add_front(t, 4);
    assert(list->mem(t, 4));
}

static Item * double_len(void * content, int len)
{
    Item * ret = new Item(content, len * 2);

    return ret;
}

static void test_map()
{
    char test_contents[][4] = {"ga", "bu", "zo", "meu"};
    int test_lens[] = {2, 2, 2, 3};
    int test_qty = 4;

    List * list = new List();
    for (int i = 0; i < test_qty; ++i)
        list->add_back(test_contents[i], test_lens[i]);
    List* ret = list->map(&double_len);
    assert(ret->getLen() == list->getLen());
    assert(ret != list);
    Item* cur = const_cast<Item *>(ret->getHead()); // Only for testing purposes !!
    for (int i = 0; cur != 0; cur = cur->getNext(), ++i)
    {
        assert(cur->getLen() == test_lens[i] * 2);
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

