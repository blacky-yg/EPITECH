/*
** EPITECH PROJECT, 2021
** B-CPP-300-COT-3-1-CPPrush2-hamidou.tessilimi
** File description:
** rolling
*/

#include "rolling.hpp"
#include "Object.hpp"

TheTable::TheTable() : ITable::ITable()
{
    std::cout << "It's time to create a new table." << std::endl;
    for (int i = 0; i < 10; i++)
        objTab[i] = NULL;
}

Object *TheTable::Take(int i)
{
    Object *New;

    if (i > 11)
        return NULL;
    if (objTab[i]) {
        New = objTab[i];
        objTab[i] = NULL;
      return New;
    }
    std::cout << "No object in tha table right now." << i << std::endl;
    return NULL;
}

bool TheTable::Put(Object *NewObj)
{
    if (!NewObj)
        return false;
    for (int i = 0; i < 10; i++) {
        if (!objTab[i]) {
	        objTab[i] = NewObj;
	        return true;
	    }
    }
    return false;
}

const std::string **TheTable::Look()
{
    const std::string **str = new const std::string*[10];
    int i = 0, j = 0;

    if (!j)
        return (NULL);
    while (i < 10) {
        if (objTab[i]) {
	        str[j] = &(objTab[i]->getTitle());
	        j++;
	    }
        i++;
    }
    while (j < 10) {
        str[j] = NULL;
        j++;
    }
    return str;
}