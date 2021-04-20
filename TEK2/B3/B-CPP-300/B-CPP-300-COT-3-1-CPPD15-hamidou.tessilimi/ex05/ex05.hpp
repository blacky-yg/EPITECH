/*
** EPITECH PROJECT, 2021
** day15
** File description:
** ex05
*/

#ifndef EX05_HPP
#define EX05_HPP

#include <iostream>

template<typename T>
class array {
    public:
        // Default Constructor
        array() : _n(0), _array(nullptr) {}

        // Parameters Constructor
        array(unsigned int n) : _n(n), _array(new T[n]) {}

        // Copy Constructor
        array (const array &ref) {
            _n = ref._n;
            _array = new T[_n];
            for (unsigned int i = 0; i < _n; i++)
                _array[i] = ref._array[i];
        }

        // Get size of array
        int size() const { return (_n); }

        // [] operator
        T &operator[](unsigned int n) {
            if (n >= _n) {
                T *array = new T[n + 1];
                for (unsigned int i = 0; i < _n; i++)
                    array[i] = _array[i];
                delete[] _array;
                _array = array;
                _n = n + 1;
            }
            return (_array[n]);
        }

        // [] Throw Execption
        T &operator[](unsigned int n) const {
            if (n >= _n)
                throw std::exception();
            return (_array[n]);
        }

        // Operator =
        array<T> &operator=(const array<T> &ref) {
            if (_array)
                delete[] _array;
            _n = ref._n;
            _array = new T[ref._n];
            for (unsigned int i = 0; i < _n; i++)
                _array[i] = ref._array[i];
            return (*this);
        }

        // [] Dump()
        void dump() const {
            std::cout << "[";
            for (unsigned int i = 0; i < _n; i++) {
                std::cout << _array[i];
                if (i + 1 != _n)
                    std::cout << ", ";
            }
            std::cout << "]" << std::endl;
        }

        // convertTo
        template<typename U>
        array<U> convertTo(U (*func)(T const &)) const {
            array<U> copy(_n);
            for (unsigned int i = 0; i < _n; i++)
                copy[i] = func(_array[i]);
            return (copy);
        }

        // delete ~array
        ~array() {
            if (_array)
                delete[] _array;
        }

    private:
        unsigned int _n;
        T *_array;
};

// dump()
template<>
void array<bool>::dump() const {
    std::cout << "[";
    for (unsigned int i = 0; i < _n; i++) {
        std::cout << std::boolalpha << _array[i];
        if (i + 1 != _n)
            std::cout << ", ";
    }
    std::cout << std::noboolalpha << "]" << std::endl;
}

#endif /* !EX05_HPP */