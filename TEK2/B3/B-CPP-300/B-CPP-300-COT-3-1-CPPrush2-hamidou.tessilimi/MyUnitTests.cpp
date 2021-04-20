/*
** EPITECH PROJECT, 2021
** rush2
** File description:
** MyUnitTests
*/

#include "MyUnitTests.hpp"

static int getLengthOf(Object **obj) {
    int i = 0;
    for (; obj[i]; i++);
    return (i);
}

Object **MyUnitTests()
{
    Object **myObject = new Object*[3];
    nullptr_t nul;

    myObject[0] = new LittlePony("happy pony");
    myObject[1] = new Teddy("cuddles");
    myObject[2] = nul;
    return (myObject);
}

Object *MyUnitTests(Object **obj)
{
    nullptr_t nul;

    if (!obj) {
        std::cerr << "Nothing in the Object" << std::endl;
        return (nul);
    } else if (getLengthOf(obj) != 3) {
        std::cerr << "**Object Must Contain 3 Elements" << std::endl;
        return (nul);
    } else if (reinterpret_cast<Toy *>(obj[0])->getType() != Toy::TEDDY &&
        reinterpret_cast<Wrap *>(obj[1])->getType() != Wrap::BOX &&
        reinterpret_cast<Wrap *>(obj[2])->getType() != Wrap::GIFTPAPER)
    {
        std::cerr << "Invalid Elements in the Object" << std::endl;
        return (nul);
    }
    Teddy *teddy = reinterpret_cast<Teddy *>(obj[0]);
    Box *box = reinterpret_cast<Box *>(obj[1]);
    GiftPaper *gift = reinterpret_cast<GiftPaper *>(obj[2]);

    box->openMe();
    box->wrapMeThat(teddy);
    gift->wrapMeThat(reinterpret_cast<Object *>(box));
    return (reinterpret_cast<Object *>(gift));
}