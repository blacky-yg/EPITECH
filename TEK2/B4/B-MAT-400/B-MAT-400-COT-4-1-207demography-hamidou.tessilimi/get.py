##
## EPITECH PROJECT, 2021
## 207demography
## File description:
## get
##

import csv
from parse import *

def get_file_content(filepath, av):
    countries = []
    with open('207demography_data.csv', 'r') as file:
        lines = csv.reader(file, delimiter = ';')
        for line in lines:
            try:
                av.index(line[1])
            except ValueError:
                continue
            else:
                countries.append(line)
    check_countries(countries)
    return (countries)

def get_population(country):
    population = []
    for i in range(2, len(country[0])):
        pop_per_year = 0
        c = 0
        for c in range(0, len(country)):
            try:
                if (country[c][i] != ""):
                    pop_per_year += float(country[c][i])
            except:
                pop_per_year += 0
            c += 1
        population.append(pop_per_year)
        i += 1
    i = 0
    return (population)