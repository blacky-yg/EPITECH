import sys
from math import *

def usage():
    print("USAGE")
    print("    ./203hotline [n k | d]\n")
    print("DESCRIPTION")
    print("    n\t   n value for the computation of C(n, k)")
    print("    k\t   k value for the computation of C(n, k)")
    print("    d\t   average duration of calls (in seconds)")
    sys.exit(0)

def error():
    print("Type ./203hotline -h for help", file=sys.stderr)
    sys.exit(84)

def check_av(ac, av):
    if (ac == 2 and "-h" in av):
        usage()
        sys.exit(0)
    if (ac != 2 and ac != 3):
        error()
    for i in range(1, ac):
        if (av[i].isdigit() == False):
            error()
    if (ac == 2 and int(av[1]) < 0):
        error()
    if (ac == 3):
        if (int(av[1]) < 0 or int(av[2]) < 0):
            error()
        if (int(av[2]) > int(av[1])):
            error()