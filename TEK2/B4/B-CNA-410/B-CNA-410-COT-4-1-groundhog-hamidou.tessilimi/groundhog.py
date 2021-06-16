#!/usr/bin/env  python3

import sys
import math

def calcG(inList, p):
    if (len(inList) <= p):
        return "nan"
    g = 0
    top = 0
    count = len(inList) - p
    while count != len(inList):
        top = inList[count] - inList[count-1]
        if (top < 0):
            top = 0
        g += top
        count += 1
    return format(round(g/p, 2), '0.2f')

def calcR(inList, p):
    if (len(inList) <= p):
        return "nan"
    a = inList[len(inList) - p - 1]
    if a == 0:
        return "man"
    return round(((inList[-1] - a) / a)* 100)

def calcS(inList, p):
    if (len(inList) < p):
        return "nan"
    moy = sum(inList[-p:]) / p
    i = 0
    tot = 0
    while i != p:
        tot += (inList[len(inList) - p + i] - moy)**2
        i += 1
    return format(round(math.sqrt(tot / p), 2), '0.2f')

def check_SwitchOccurs(inList, p):
    if (len(inList) <= p + 1):
        return ""
    try:
        now =  round((inList[-1] / inList[-1-p] - 1) * 100)
        before =  round((inList[-2] / inList[-2-p] - 1) * 100)
    except (ValueError, FloatingPointError, ZeroDivisionError, TypeError):
        return ("")
    if (abs(now + before) != abs(before) + abs(now)):
        return ("\ta switch occurs")
    return ""

def calcW(inList, p, s):
    if (len(inList) <= p):
        return [inList[-1], 0]
    size = len(inList)
    diff = abs(inList[size-1] - inList[size-2])
    percent = diff / float(s)
    if (percent >= 2):
        percent = 0
    return [inList[-1], round(percent, 2)]

def getW(weird):
    weird.sort(key = lambda x : x[1], reverse=True)
    return (weird[:5])

def get_period():
    try:
        int(sys.argv[1])
    except ValueError:
        print("Number only!")
        exit (84)
    period = int(sys.argv[1])
    if period <= 0:
        print("Invalid number of period!")
        exit (84)
    return (period)