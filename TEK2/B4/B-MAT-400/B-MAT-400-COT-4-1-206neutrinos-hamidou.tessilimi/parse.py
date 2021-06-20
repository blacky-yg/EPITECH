##
## EPITECH PROJECT, 2021
## 206neutrinos
## File description:
## parse
##

import sys
from math import *

def usage():
    print("USAGE")
    print("    ./206neutrinos n a h sd\n")
    print("DESCRIPTION")
    print("    n\t   number of values")
    print("    a\t   arithmetic mean")
    print("    h\t   harmonic mean")
    print("    sd\t   standard deviation")
    sys.exit(0)

def error():
    print("Type ./206neutrinos -h for help", file=sys.stderr)
    sys.exit(84)

def is_str_float(_str):
    try:
        float(_str)
        return True
    except ValueError:
        return False

def check_av(ac, av):
    if (ac == 2 and "-h" in av):
        usage()
    if (ac != 5):
        error()
    if av[1].isdigit() == False:
        error()
    for i in range(1, ac):
        if (is_str_float(av[i]) == False or float(av[i]) < 0):
            error()
    if (float(av[3]) == 0.0):
        error()
