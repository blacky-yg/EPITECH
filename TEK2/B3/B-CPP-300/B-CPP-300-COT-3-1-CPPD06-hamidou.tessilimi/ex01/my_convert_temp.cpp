/*
** EPITECH PROJECT, 2021
** day03
** File description:
** my_convert_temp
*/

#include "my_convert_temp.hpp"

void far_to_cel(float frh)
{
    float cel = 5.0 / 9.0 * (frh - 32.0);
    std::cout << std::setw(16) << std::fixed << std::setprecision(3) << cel << std::setw(16) << "Celsius" << std::endl;
}

void cel_to_far(float cel)
{
    float frh = (cel * 9.0 / 5.0) + 32.0;
    std::cout << std::setw(16) << std::fixed << std::setprecision(3) << frh << std::setw(16) << "Fahrenheit" << std::endl;
}

void my_convert_temp(void)
{
    float temp = 0;
    std::string str;
    std::string tmp;

    std::cin >> str;
    tmp = str;
    std::cin >> str;
    if (str == "Celsius") {
        temp = std::stof(tmp);
        cel_to_far(temp);
    } else if (str == "Fahrenheit") {
        temp = std::stof(tmp);
        far_to_cel(temp);
    }
}