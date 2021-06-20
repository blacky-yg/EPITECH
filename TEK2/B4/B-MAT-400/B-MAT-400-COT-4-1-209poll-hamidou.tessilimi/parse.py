##
## EPITECH PROJECT, 2021
## 209poll
## File description:
## parse
##

import sys
from math import *

def usage():
    print("USAGE")
    print("    ./209poll pSize sSize p\n")
    print("DESCRIPTION")
    print("    pSize\tsize of the population")
    print("    sSize\tsize of the sample (supposed to be representative)")
    print("    p    \tpercentage of voting intentions for a specific candidate")
    sys.exit(0)

def error():
    print("Type ./209poll -h for help", file=sys.stderr)
    sys.exit(84)

def check_av(ac, av):
    if (ac == 2 and "-h" in av):
        usage()
    if (ac != 4):
        error()
    for i in range(1, ac - 1):
        if not av[i].isdigit():
            error()
    if not isinstance(float(av[3]), float):
        error()