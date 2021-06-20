##
## EPITECH PROJECT, 2021
## 207demography
## File description:
## parse
##

import sys
from math import *

def usage():
    print("USAGE")
    print("    ./207demography code [...]\n")
    print("DESCRIPTION")
    print("    code    country code")
    sys.exit(0)

def error():
    print("Type ./206neutrinos -h for help", file=sys.stderr)
    sys.exit(84)

def check_countries(countries):
    if (len(countries) <= 0):
        error()

def check_av(ac, av):
    if (ac == 2 and "-h" in av):
        usage()
    if (ac < 2):
        error()
    for i in range(1, ac):
        if av[i].isupper() == False:
            error()