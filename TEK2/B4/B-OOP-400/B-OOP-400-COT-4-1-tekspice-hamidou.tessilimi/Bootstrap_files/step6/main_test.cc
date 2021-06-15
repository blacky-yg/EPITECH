/******************************************************************************/
/*                                                                            */
/*                        main_test.c for the list project                    */
/*                        Made by David GIRON and Maxime MONTINET             */
/*                                                                            */
/******************************************************************************/

#include <cassert>
#include <iostream>

#include "list.hpp"

static void test_new_default()
{
    List<int>* list = new List<int>();

    assert(list->getLen() == 0);

    delete list;
}

static void test_populate_front()
{
    List<int>* list = new List<int>();

    assert(list->getLen() == 0);

    for (int i = 0; i < 4; ++i)
    {
        list->push_front(i);
        assert(list->getLen() == i + 1);
        assert(list->mem(i));
    }
    assert(list->back() == 0);
    assert(list->front() == 3);
}

static void test_populate_back()
{
    List<int>* list = new List<int>();

    assert(list->getLen() == 0);

    for (int i = 0; i < 4; ++i)
    {
        list->push_back(i);
        assert(list->getLen() == i + 1);
        assert(list->mem(i));
    }
    assert(list->front() == 0);
    assert(list->back() == 3);
}

static void test_mem()
{
    List<int>* list = new List<int>();
    assert(list->mem(42) == false);
    list->push_front(42);
    assert(list->mem(42));
}

static int doubleit(int & i)
{
    return i * 2;
}

static void test_map()
{
    List<int> * list = new List<int>();
    for (int i = 0; i < 4; ++i)
        list->push_back(i);
    List<int>* ret = list->map(&doubleit);
    assert(ret->getLen() == list->getLen());
    assert(ret != list);
    List<int>::iterator it = ret->begin();
    List<int>::iterator ite = ret->end();
    for (int i = 0; it != ite; ++it, ++i)
    {
        assert(*it == i * 2);
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

