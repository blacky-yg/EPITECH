##
## EPITECH PROJECT, 2021
## 204ducks
## File description:
## utils
##

import sys
from math import *

def usage():
    print("USAGE")
    print("\t./204ducks a\n")
    print("DESCRIPTION")
    print("\ta\tconstant")

def error():
    print("Type ./204ducks -h for help", file=sys.stderr)
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
        sys.exit(0)
    if (ac != 2):
        error()
    if is_str_float(av[1]) == False:
        error()
    if (float(av[1]) < 0 or float(av[1]) > 2.5):
        error()
