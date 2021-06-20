##
## EPITECH PROJECT, 2021
## 209poll
## File description:
## calc
##

from math import *

def get_variance(av):
    pop, samp, poll = int(av[1]), int(av[2]), float(av[3]) / 100
    return ((poll * (1 - poll)) / samp) * ((pop - samp) / (pop - 1))

def get_min(num):
    return (num if (num >= 0) else 0)

def get_max(num):
    return (num if (num <= 100) else 100)