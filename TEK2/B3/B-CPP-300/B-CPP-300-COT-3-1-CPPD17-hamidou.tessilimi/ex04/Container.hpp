/*
** EPITECH PROJECT, 2021
** day17
** File description:
** container
*/

#ifndef CONTAINER_HPP
#define CONTAINER_HPP

#include <iostream>
#include <algorithm>
#include <stack>

template<typename U>
void add(U &value)
{
    value += 1;
}

template<typename U>
void aff(U value)
{
    std::cout << "Value: " << value << std::endl;
}

template<typename U, template <typename, typename> class proto>
class contain {

    private:
        proto<U, std::allocator<U> > _container;

    public:
        contain() {}

        virtual ~contain() {}

        void push(U value)
        {
            _container.push_back(value);
        };

        void aff()
        {
            std::for_each(_container.begin(), _container.end(), &::aff<U>);
        };

        void add()
        {
            std::for_each(_container.begin(), _container.end(), &::add<U>);
        };
};

#endif /* !CONTAINER_HPP */