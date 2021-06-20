##
## EPITECH PROJECT, 2021
## 205IQ
## File description:
## calc
##

from math import *

def prob(mu, sigma, i):
    return ((1 / (float(sigma) * sqrt(2 * pi))) * exp(-0.5 * pow((float(i) - float(mu)) / float(sigma), 2)))

def between_0_200(mu, sigma):
    result = float(0)
    for i in range(0, 201):
        result = prob(mu, sigma, i)
        print("%d %.5f" % (i, result))

def between_min_max(mu, sigma, min, max):
    i = min
    result = float(0)
    while i < max:
        result += prob(mu, sigma, i)
        i += 0.01
    print("%.1f%% of people have an IQ between %d and %d" % (result, min, max))

def inferior_iq(mu, sigma, iq):
    i = 0.0
    result = float(0)
    while i < iq:
        result += prob(mu, sigma, i)
        i += 0.01
    print("%.1f%% of people have an IQ inferior to %d" % (result, iq))