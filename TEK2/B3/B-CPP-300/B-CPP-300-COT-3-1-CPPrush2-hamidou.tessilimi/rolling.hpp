/*
** EPITECH PROJECT, 2021
** B-CPP-300-COT-3-1-CPPrush2-hamidou.tessilimi
** File description:
** rolling
*/

#ifndef ROLLING_HPP_
#define ROLLING_HPP_

#include "Toy.hpp"
#include "Wrap.hpp"


class ITable {
    public:
      virtual ~ITable() {}
      virtual Object *Take(int) = 0;
      virtual bool Put(Object *) = 0;
      virtual std::string *Look() const = 0;

    protected:
    private:
};

class TheTable : public ITable {
    private:
      Object *objTab[10];
    public:
      TheTable();
      Object *Take(int);
      bool Put(Object *);
      const std::string **Look();
};

class IConveyorBelt {
    public:
      virtual ~IConveyorBelt() {}
      virtual Object *Take() = 0;
      virtual bool Put(Object*) = 0;
      virtual bool IN() = 0;
      virtual bool OUT() = 0;
      virtual std::string const Look()const = 0;
      
    protected:
    private:
};



ITable *createTable();
IConveyorBelt *createConveyorBelt();

#endif /* !ROLLING_HPP_ */
