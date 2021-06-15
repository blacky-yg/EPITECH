/*
** EPITECH PROJECT, 2021
** arcade
** File description:
** DLLoader
*/

#ifndef DLLOADER_HPP
#define DLLOADER_HPP

#include "header.hpp"
#include "CoreException.hpp"

template<class T>
class DLLoader {
    public:
        DLLoader(const std::string &) noexcept(false);
        ~DLLoader() noexcept(false);
        DLLoader &operator=(DLLoader const &);
        T *getInstance(std::string);

    private:
        std::string _filepath;
        void *_handle;
};

template<class T>
DLLoader<T>::DLLoader(const std::string &filepath) noexcept(false) : _filepath(filepath)
{
    if ((_handle = dlopen(_filepath.c_str(), RTLD_NOW)) == NULL)
        throw CoreException(dlerror());
}

template<class T>
DLLoader<T>::~DLLoader() noexcept(false)
{
    if (dlclose(_handle) != 0)
        throw CoreException("Error: Library could not close !");
}

template<class T>
DLLoader<T> &DLLoader<T>::operator=(DLLoader const &copy)
{
    if (&copy != this)
        _handle = copy._handle;
    return (*this);
}

// template<class T>
// DLLoader<T> &DLLoader<T>::operator=(const DLLoader &copy)
// {
//     _filepath = copy._filepath;
//     if ((_handle = dlopen(_filepath.c_str(), RTLD_NOW)) == NULL)
//         throw CoreException("Error: Library not open !");
// }

template<class T>
T *DLLoader<T>::getInstance(std::string init)
{
    T *(*load)(void);

    *(void **)(&load) = dlsym(_handle, init.c_str());
    if (!load)
        throw CoreException("");
    return (*load)();
}

#endif /* !DLLOADER_HPP */