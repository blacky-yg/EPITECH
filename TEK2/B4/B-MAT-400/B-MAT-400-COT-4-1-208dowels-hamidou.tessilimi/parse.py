#!/usr/bin/env python3.8

import sys
from math import *

def usage():
    print("USAGE")
    print("    ./208dowels 00 01 02 03 04 05 06 07 08\n")
    print("DESCRIPTION")
    print("    0i\t   size of the observed class")
    sys.exit(0)

def error():
    print("Type ./208dowels -h for help", file=sys.stderr)
    sys.exit(84)

def is_str_int(_str):
    try:
        int(_str)
        return True
    except ValueError:
        return False

def check_av(ac, av):
    total = 0
    if (ac == 2 and "-h" in av):
        usage()
    if (ac != 10):
        error()
    for i in range(1, ac):
        if is_str_int(av[i]) == False:
            error()
        if (int(av[i]) < 0):
            error()
        total += int(av[i])
    if (total != 100):
        error()
