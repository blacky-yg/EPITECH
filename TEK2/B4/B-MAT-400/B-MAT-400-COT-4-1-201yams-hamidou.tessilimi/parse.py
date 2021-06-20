import sys
from math import *

def usage():
    print("USAGE\n    ./201yams d1 d2 d3 d4 d5 c\n")
    print("DESCRIPTION")
    print("    d1\t    value of the first die (0 if not thrown)")
    print("    d2\t    value of the second die (0 if not thrown)")
    print("    d3\t    value of the third die (0 if not thrown)")
    print("    d4\t    value of the fourth die (0 if not thrown)")
    print("    d5\t    value of the fifth die (0 if not thrown)")
    print("    c\t    expected combination")
    sys.exit(0)

def error():
    print("Type ./201yams -h for help", file=sys.stderr)
    sys.exit(84)

def check_combination(comb):
    args = ["pair", "three", "four", "full", "straight", "yams"]
    if (comb[0] not in args):
        return (1)
    if (comb[0] == "straight" and (comb[1] != '5' and comb[1] != '6')):
        return (1)
    if (comb[0] != "full"):
        if comb[1].isdigit():
            if (comb[1] <= '0' or comb[1] > '6'):
                return (1)
        else:
            return (1)
    else:
        if (len(comb) != 3 or (comb[1] == '' or comb[2] == '') or (comb[1] == comb[2])):
            return (1)
        if ((comb[1] < '0' or comb[1] > '6') or (comb[2] <= '0' or comb[2] > '6')):
            return (1)
    return (0)

def check_av(ac, av):
    if (ac == 2 and "-h" in av):
        usage()
    if (ac != 7):
        error()
    else:
        for i in range(1, 6):
            if (av[i].isdigit() and (int(av[i]) >= 0 and int(av[i]) <= 6)):
                i = i + 1
            else:
                error()
        comb = av[6].split("_")
        if (len(comb) != 2 and len(comb) != 3):
            error()
        if (check_combination(comb) == 1):
            error()

def my_getnbr(char):
    try:
        nb = int(char)
    except:
        raise Exception("Number ~ [1..6]")
    if (nb < 0 or nb > 6):
        raise Exception("Bad Number")
    return (nb)