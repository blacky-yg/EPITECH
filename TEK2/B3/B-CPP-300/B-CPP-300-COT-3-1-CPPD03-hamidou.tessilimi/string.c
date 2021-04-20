/*
** EPITECH PROJECT, 2021
** day03
** File description:
** string
*/

#include "string.h"

void string_init_2(string_t *this)
{
    this->empty = &empty;
    this->find_c = &find_c;
    this->find_s = &find_s;
    this->insert_c = &insert_c;
    this->insert_s = &insert_s;
    this->to_int = &to_int;
    this->print = &print;
}

void string_init(string_t *this, const char *s)
{
    if (this != NULL) {
        if (s != NULL)
            this->str = strdup(s);
        else
            this->str = NULL;
        this->assign_s = &assign_s;
        this->assign_c = &assign_c;
        this->append_c = &append_c;
        this->append_s = &append_s;
        this->at = &at;
        this->clear = &clear;
        this->size = &size;
        this->compare_s = &compare_s;
        this->compare_c = &compare_c;
        this->copy = &copy;
        this->c_str = &c_str;
        string_init_2(this);
    }
}

void string_destroy(string_t *this)
{
    if (this != NULL && this->str != NULL)
        free(this->str);
}