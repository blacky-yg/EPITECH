import sys
import math
import time

def binomial(n, k):
    return (math.factorial(n) // (math.factorial(k) * math.factorial(n - k)))

def get_sup(p):
    nb = 0
    for i in range(0, 26):
        nb += p[i]
    return nb

def compute_binomial(i, d):
    c = int(28800 / d)
    succ = 1 / c
    fail = 1 - succ
    p = binomial(3500, i) * (succ ** i) * (fail ** (3500 - i))
    return (p)

def binomial_law(d):
    begin = time.time()
    p = []
    line = 0
    counter = 0
    for i in range(0, 51):
        p.append(compute_binomial(i, d))
    while (counter < 51):
        while (line < 5 and counter < 51):
            print(counter, "->", end=' ')
            print("%.3f" % p[counter], end='')
            print("\t", end='') if (line != 4 and counter != 50) else print()
            counter += 1
            line += 1
        line = 0
    o_load = (1 - get_sup(p)) * 100
    print("Overload: %.1f" % o_load, end="%\n")
    print("Computation time: %.2f ms" % ((time.time() - begin) * 1000))

def compute_poisson(i, d):
    c = d / 28800
    coef = 3500 * c
    p = ((coef ** i) / math.factorial(i)) * math.exp(-coef)
    return (p)

def poisson_law(d):
    begin = time.time()
    p = []
    line = 0
    counter = 0
    for i in range(0, 51):
        p.append(compute_poisson(i, d))
    while (counter < 51):
        while (line < 5 and counter < 51):
            print(counter, "->", end=' ')
            print("%.3f" % p[counter], end='')
            print("\t", end='') if (line != 4 and counter != 50) else print()
            counter += 1
            line += 1
        line = 0
    o_load = (1 - get_sup(p)) * 100
    print("Overload: %.1f" % o_load, end="%\n")
    print("Computation time: %.2f ms" % ((time.time() - begin) * 1000))