import sys

def usage():
    print("USAGE")
    print("\t./110borwein n\n")
    print("DESCRIPTION")
    print("\tn   constant defining the integral to be computed")
    sys.exit(0)

def error():
    print("Type ./110borwein -h for help")
    sys.exit(84)

def check_av(ac, av):
    if (ac == 2 and (av[1] == "-h" or av[1] == "--help")):
        usage()
    if (ac != 2):
        error()
    if (av[1].isdigit() == False):
        error()