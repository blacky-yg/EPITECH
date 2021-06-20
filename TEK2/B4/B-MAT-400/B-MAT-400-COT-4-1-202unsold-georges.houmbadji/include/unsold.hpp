/*
** EPITECH PROJECT, 2021
** unsold.hpp
** File description:
** unsold.hpp
*/

#ifndef UNSOLD_HPP_
#define UNSOLD_HPP_

#include <iostream>
#include <iomanip>
#include <cstring>
#include <string>
#include <list>
#include <cmath>

struct tuple
{
    int a;
    int b;
};

/*===================USAGE=================*/
  void usage();
/*=========================================*/

/*==================ERROR==================*/
  int str_arg(int ac, char **av);
  int less_arg(int ac, char **av);
  int error(int ac, char **av);
/*=========================================*/

/*================UNSOLD===================*/
  double probxy(int x, int y, int a, int b);
  double my_round(double d);
  double **lawxy(int a, int b);
  double probz(int z, int a, int b);
  double expected(int a, int b, char opt);
  double variance(int a, int b, char opt);
  void unsold(int a, int b);
/*=========================================*/


#endif
