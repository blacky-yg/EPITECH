##
## EPITECH PROJECT, 2021
## 204ducks
## File description:
## calc
##

import sys
from math import *

derivative = lambda a, t : (a * exp(-t)) + ((4 - 3*a) * exp(-2 * t)) + (2*a - 4) * ((exp(-4 * t)))
primitive = lambda a, t : (-a * exp(-t)) - ((4 - 3*a)/2* exp(-2*t)) - ((2*a - 4) / 4 * exp(-4 * t))

def average(a):
    percent, t_sum, t = 0, 0, 0
    while percent < 100:
        while primitive(a, t / 60) - primitive(a, 0) < (percent / 100):
            t += 0.01
        t_sum += t
        t = 0
        percent += 0.2
    t_sum = ceil(t_sum / 500)
    in_min = int(t_sum / 60)
    in_sec = t_sum - (in_min * 60)
    return in_min, in_sec

def std_deviation(a, average):
    squares, t, res = 0, 0, 0
    while t < 100:
         squares += ((t - average) ** 2) * (derivative(a, t) / 100)
         t += 0.01
    res = sqrt(squares)
    return res

def back_time(a, percent):
    t = 0
    search = True
    while search == True :
        if primitive(a, t / 60) - primitive(a, 0) >= percent :
            search = False
        t += 0.01
    t = round(t)
    in_min = int(t / 60)
    in_sec = t - (in_min * 60)
    return in_min, in_sec

def back_percent(a, t):
    integral = primitive(a, t) - primitive(a, 0)
    return integral
