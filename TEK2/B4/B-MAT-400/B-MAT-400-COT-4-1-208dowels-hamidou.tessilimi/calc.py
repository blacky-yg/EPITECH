#!/usr/bin/env python3.8

from math import *

def distribution(av):
    prod = [i * int(av[i]) for i in range(len(av))]
    sucprob = sum(prod)/10000
    return (sucprob)

def binomial(n, k, sucprob):
    res = comb(n, k) * (sucprob ** k) * ((1 - sucprob) ** (n - k))
    return res
