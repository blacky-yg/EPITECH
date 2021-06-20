#!/usr/bin/env python3.8

from getValues import *

def printArray(xarray, oxarray, txarray):
   print("   x\t| ", end='')
   for i in range(len(xarray)):
      print(xarray[i], sep='', end="\t| ")
   print ("Total")
   print("  Ox\t| ", end='')
   for i in range(len(oxarray)):
      print(oxarray[i], sep='', end="\t| ")
   print("100")
   print("  Tx\t| ", end='')
   for i in range(len(txarray)):
      print("{:.1f}".format(txarray[i]), end="\t| ")
   print("100")

def printDistribution(sucprob):
   print("Distribution:\t\tB({}, {:.4f})".format(100, sucprob))

def printChisquared(value):
   print("Chi-squared:\t\t{:.3f}".format(value))

def printDegree(degree):
   print("Degrees of freedom:\t{}".format(degree))

def printInterval(chisquare, degree):
   interval = getInterval(chisquare, degree)
   print("Fit validity:\t\t", end='')
   if -1 in interval:
      if interval[0] == -1:
         print("P < {}%".format(interval[1]))
      elif interval[1] == -1:
         print("P > {}%".format(interval[0]))
   else:
      print("{}% < P < {}%".format(interval[0], interval[1]))
