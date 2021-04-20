/*
** EPITECH PROJECT, 2021
** rush2
** File description:
** Wrap
*/

#ifndef WRAP_HPP
#define WRAP_HPP

#include "Object.hpp"

class Wrap {
    public:
        // CTOR && DTOR
        Wrap();
        ~Wrap();

        // ENUM
        enum WrapElem {
            BOX,
            GIFTPAPER
        };

        // GETTER
        Object *getObject();

        void wrapMeThat(Object *obj);
        void openMe();
        void closeMe();
        bool isEmpty() const;
        WrapElem getType() const;

        WrapElem _type;

    protected:
        Object *_obj;
        bool _isOpen;

    private:
};

class Box : public Wrap {
    public:
        Box();
        ~Box();
    protected:
    private:
};

class GiftPaper : public Wrap {
    public:
        GiftPaper();
        ~GiftPaper();

    protected:
    private:
};

#endif /* !WRAP_HPP */