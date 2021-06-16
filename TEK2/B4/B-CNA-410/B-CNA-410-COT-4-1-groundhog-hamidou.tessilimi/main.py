#!/usr/bin/env  python3

import sys
import math
import groundhog

def usage():
    print("SYNOPSIS")
    print("    ./groundhog period\n")
    print("DESCRIPTION")
    print("    period        the number of days defining a period")

def check_av(ac, av):
    if (len(sys.argv) != 2):
        exit(84)
    if (sys.argv[1] == "-h"):
        usage()
        exit(0)

def main():
    check_av(len(sys.argv), sys.argv)
    p = groundhog.get_period()
    try:
        av = input()
    except (EOFError, KeyboardInterrupt):
        exit (84)
    inList = []
    weird = []
    r = 0
    switch = 0
    while (av != "STOP"):
        try:
            float(av)
        except (ValueError, TypeError):
            print("That's not a number !")
            exit (84)
        inList.append(float(av))
        if (p != 0):
            g = groundhog.calcG(inList, p)
            r = groundhog.calcR(inList, p)
            swOcc = groundhog.check_SwitchOccurs(inList, p)
            s = groundhog.calcS(inList, p)
            weird.append(groundhog.calcW(inList, p, s))
        else:
            g = "man"
            r = "man"
            s = "man"
        if (swOcc != ""):
            switch += 1
        print("g=" + str(g) + "\tr=" + str(r) + "%\ts="+ str(s) + swOcc)
        try:
            av = input()
        except (EOFError, KeyboardInterrupt):
            exit (84)
    if (len(inList) <= p):
        print("Not enought numbers")
        exit(84)
    print("Global tendency switched " + str(switch) + " times")
    weirdest = groundhog.getW(weird)
    print("5 weirdest values are [", end="")
    i = 0
    while i < 5:
        print(weirdest[i][0], end="")
        if i < 4:
            print(", ", end="")
        i += 1
    print("]")
    return (0)

if __name__ == "__main__":
    main()