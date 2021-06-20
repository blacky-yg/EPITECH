##
## EPITECH PROJECT, 2021
## 205IQ
## File description:
## parse
##

import sys
from math import *

def usage():
    print("USAGE")
    print("    ./205IQ u s [IQ1] [IQ2]\n")
    print("DESCRIPTION")
    print("    u\t   mean")
    print("    s\t   standart deviation")
    print("    IQ1\t   maximum IQ")
    print("    IQ2\t   maximum IQ")
    sys.exit(0)

def error():
    print("Type ./205IQ -h for help", file=sys.stderr)
    sys.exit(84)

def check_av(ac, av):
    if (ac == 2 and "-h" in av):
        usage()
    if (ac < 3 or ac > 5):
        error()
    for i in range(1, ac):
        if (av[i].isdigit() == False):
            error()
    if (int(av[1]) < 0 or int(av[1]) > 200):
        error()
    if (int(av[2]) <= 0):
        error()
    if (ac == 4):
        if (int(av[3]) < 0 or int(av[3]) > 200):
            error()
    if (ac == 5):
        if (int(av[3]) >= int(av[4])):
            error()
        if (int(av[3]) < 0):
            error()
        if (int(av[3]) > 200 or int(av[4]) > 200):
            error()