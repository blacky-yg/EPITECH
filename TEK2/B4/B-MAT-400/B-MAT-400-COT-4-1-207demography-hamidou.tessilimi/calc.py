##
## EPITECH PROJECT, 2021
## 207demography
## File description:
## calc
##

from math import *
import numpy

def get_fit1_coef(population):
    up, down = 0, 0
    y = 1960
    avg_y, avg_p = 0, 0
    pop_len = len(population)
    for i in range(0, pop_len):
        up += y * (population[i] / 10 ** 6)
        down += y ** 2
        avg_y += y
        avg_p += (population[i] / 10 ** 6)
        y += 1
    avg_y /= pop_len
    avg_p /= pop_len
    up -= pop_len * avg_y * avg_p
    down -= pop_len * avg_y ** 2
    a = up / down
    return (a, avg_p - a * avg_y)

def root_mean_x(a, b, population):
    root, y = 0.0, 1960
    for i in range(0, len(population)):
        root += ((population[i] / 10 ** 6) - (b + (a * y))) ** 2
        y += 1
    return (numpy.sqrt(root / len(population)))

def fit1(population):
    a, b = get_fit1_coef(population)
    print("Fit1")
    print("\tY = %.2f X + %.2f" % (a, b)) if (b >= 0) else print("\tY = %.2f X - %.2f" % (a, (-b)))
    print("\tRoot-mean-square deviation: %.2f" % root_mean_x(a, b, population))
    print("\tPopulation in 2050: %.2f" % (a * 2050 + b))
    return (a)

def get_fit2_coef(population):
    up, down = 0, 0
    y = 1960
    avg_y, avg_p = 0, 0
    pop_len = len(population)
    for i in range(0, pop_len):
        avg_y += y
        avg_p += (population[i] / 10 ** 6)
        y += 1
    avg_y /= pop_len
    avg_p /= pop_len
    y = 1960
    for i in range(0, pop_len):
        up += (y - avg_y) * ((population[i] / 10 ** 6) - avg_p)
        down += ((population[i] / 10 ** 6) - avg_p) ** 2
        y += 1
    a = up / down
    return (a, avg_y - a * avg_p)

def root_mean_y(a, b, population):
    root, y = 0.0, 1960
    for i in range(0, len(population)):
        root += ((population[i] / 10 ** 6) - ((y - b) / a)) ** 2
        y += 1
    return (numpy.sqrt(root / len(population)))

def fit2(population):
    a, b = get_fit2_coef(population)
    print("Fit2")
    print("\tX = %.2f Y + %.2f" % (a, b)) if (b >= 0) else print("\tX = %.2f Y - %.2f" % (a, (-b)))
    print("\tRoot-mean-square deviation: %.2f" % root_mean_y(a, b, population))
    print("\tPopulation in 2050: %.2f" % ((2050 - b) / a))
    return (a)

def compute(population):
    print("Correlation: %.4f" % numpy.sqrt(fit1(population) * fit2(population)))