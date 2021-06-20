/*
** EPITECH PROJECT, 2021
** unsold.cpp
** File description:
** unsold.cpp
*/

#include "../include/unsold.hpp"

double **lawxy(int a, int b)
{
    double **tab = NULL;
    int i = 0, j = 0, x = 10, y = 10;
    double sumx = 0.00, sumy = 0.00;

    tab = new double*[6];
    for (int i = 0; i < 6; i++)
        tab[i] = new double[6];

    for (i = 0, y = 10; i < 5; i++, y+=10) {
        for (j = 0, x = 10; j < 5; j++, x+=10)
            tab[i][j] = probxy(x, y, a, b);
    }
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++)
            sumx += tab[i][j];
        tab[i][5] = sumx;
        sumx = 0.00;
    }
    for (j = 0; j < 6; j++) {
        for (i = 0; i < 5; i++)
            sumy += tab[i][j];
        tab[5][j] = sumy;
        sumy = 0.00;
    }
    return (tab);
}

double probz(int a, int b, int z)
{
    double res = 0.00;
    double **tab = lawxy(a, b);
    int abs = 0, ord = 0;
    std::list<tuple> list;

    switch (z) {
    case 20:
        list = {{10, 10}};
        break;
    case 30:
        list = {{10, 20}, {20, 10}};
        break;
    case 40:
        list = {{10, 30}, {30, 10}, {20, 20}};
        break;
    case 50:
        list = {{10, 40}, {40, 10}, {20, 30}, {30, 20}};
        break;
    case 60:
        list = {{10, 50}, {50, 10}, {20, 40}, {40, 20}, {30, 30}};
        break;
    case 70:
        list = {{40,30}, {30, 40}, {50, 20}, {20, 50}};
        break;
    case 80:
        list = {{30, 50}, {50, 30}, {40, 40}};
        break;
    case 90:
        list = {{50, 40}, {40, 50}};
        break;
    case 100:
        list = {{50, 50}};
        break;
    }
    auto cord = [](int val)->int{return ((val - 10) / 10);};
    for (auto it = list.begin(); it != list.end(); it++) {
        abs = cord((*it).a);
        ord = cord((*it).b);
        res += tab[ord][abs];
    }
    return (res);
}

double expected(int a, int b, char opt)
{
    double **tab = lawxy(a, b);
    double res = 0.00;

    if (opt == 'x') {
        for (int k = 0, val = 10; k < 5; k++, val+=10)
            res += (val * tab[5][k]);
    }
    else if (opt == 'y') {
        for (int k = 0, val = 10; k < 5; k++, val+=10)
            res += (val * tab[k][5]);
    }
    else if (opt == 'z') {
        for (int val = 20; val <= 100; val++)
            res += (val * probz(a, b, val));
    }
    return (res);
}

double variance(int a, int b, char opt)
{
    double **tab = lawxy(a, b);
    double res = 0.00;

    if (opt == 'x') {
        for (int k = 0, val = 10; k < 5; k++, val +=10)
            res += (pow ((val - expected(a, b, 'x')), 2) * tab[5][k]);
    }
    else if (opt == 'y') {
        for (int k = 0, val = 10; k < 5; k++, val +=10)
            res += (pow ((val - expected(a, b, 'y')), 2) * tab[k][5]);
    }
    else if (opt == 'z') {
        for (int val = 20; val <= 100; val++)
            res += (pow ((val - expected(a, b, 'z')), 2) * probz(a, b, val));
    }
    return (res);
}

void unsold(int a, int b)
{
    double **tab = lawxy(a, b);

    std::cout << std::setfill('-') << std::setw(80) << '-' << std::endl;

    std::cout << "\tX=10\tX=20\tX=30\tX=40\tX=50\tY law" << std::endl;
    for (int i = 0; i < 6; i++) {
        if (i < 5)
            std::cout << "Y=" << (i + 1) * 10 << "\t";
        else
            std::cout << "X law" << "\t";
        std::cout << std::setprecision(3);
        std::cout << std::fixed;
        for (int j = 0; j < 6; j++) {
            std::cout << tab[i][j];
            if (j != 5)
                std::cout << "\t";
        }
        std::cout << "\n";
    }

    std::cout << std::setw(80) << '-' << std::endl;

    std::cout << "z\t20\t30\t40\t50\t60\t70\t80\t90\t100" << std::endl;
    std::cout << "p(Z=z)\t";
    for (int val = 20; val <= 100; val += 10) {
        std::cout << probz(a, b, val);
        if (val != 100)
            std::cout << "\t";
    }
    std::cout << std::endl;
    std::cout << std::setw(80) << '-' << std::endl;

    std::cout << std::setprecision(1);
    std::cout << std::fixed;
    std::cout << "expected value of X:\t" << expected(a, b, 'x') << std::endl;
    std::cout << "variance of X:\t\t" << variance(a, b, 'x') << std::endl;
    std::cout << "expected value of Y:\t" << expected(a, b, 'y') << std::endl;
    std::cout << "variance of Y:\t\t" << variance(a, b, 'y') << std::endl;
    std::cout << "expected value of Z:\t" << expected(a, b, 'z') << std::endl;
    std::cout << "variance of Z:\t\t" << variance(a, b, 'z')  << std::endl;
    std::cout << std::setw(80) << '-' << std::endl;
}
