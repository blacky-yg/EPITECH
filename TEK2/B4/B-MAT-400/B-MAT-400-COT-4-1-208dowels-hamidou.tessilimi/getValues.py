#!/usr/bin/env python3.8

from calc import *

def getClasses(av):
    clist, varlist = [], []

    av = [int(av[i]) for i in range(len(av))]
    for i in range(len(av)):
        if len(clist) == 0:
            varlist.append(i)
            clist.append(varlist)
        else:
            interm = [av[(clist[-1])[i]] for i in range(len(clist[-1]))]
            if sum(interm) < 10:
                clist[-1].append(i)
            else:
                if av[i] >= 10:
                    varlist.append(i)
                    clist.append(varlist)
                else:
                    if 1 <= i < len(av) - 1:
                        if av[i - 1] <= av[i + 1]:
                            clist[-1].append(i)
                        else:
                            varlist.append(i)
                            clist.append(varlist)
                    else: 
                        clist[-1].append(i)
        varlist = []
    return (clist)

def getArray(clist, av, sucprob):
   stock = 0
   varstr = ""
   xarray, oxarray, txarray = [], [], []
   for i in range(len(clist)):
       if i != len(clist) - 1:
          varstr += str((clist[i])[0])
          if len(clist[i]) > 1:
              varstr += '-'
              varstr += str((clist[i])[-1])
       else:
          varstr += str((clist[i])[0])
          varstr += '+'
       xarray.append(varstr)
       varstr = ""

   for i in range(len(clist)):
      varlist = [int(av[(clist[i])[j]]) for j in range(len(clist[i]))]
      oxarray.append(sum(varlist))

   for i in range(len(clist)):
      if i != len(clist) - 1:
         varlist = [binomial(100, (clist[i])[j], sucprob) for j in range(len(clist[i]))]
         txarray.append(sum(varlist) * 100)
         stock += sum(varlist) * 100
      else:
         txarray.append(100 - stock)

   return xarray, oxarray, txarray


def getChisquared(oxarray, txarray):
   stock = 0
   for i in range(len(oxarray)):
      stock += ((float(oxarray[i]) - float(txarray[i])) ** 2) / float(txarray[i])
   return stock

def xsqlaw():
    l0 = [0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00, 0.00]
    l1 = [0.00, 0.02, 0.06, 0.15, 0.27, 0.45, 0.71, 1.07, 1.64, 2.71, 3.84, 5.41, 6.63]
    l2 = [0.02, 0.21, 0.45, 0.71, 1.02, 1.39, 1.83, 2.41, 3.22, 4.61, 5.99, 7.82, 9.21]
    l3 = [0.11, 0.58, 1.01, 1.42, 1.87, 2.37, 2.95, 3.66, 4.64, 6.25, 7.81, 9.84, 11.34]
    l4 = [0.30, 1.06, 1.65, 2.19, 2.75, 3.36, 4.04, 4.88, 5.99, 7.78, 9.49, 11.67, 13.28]
    l5 = [0.55, 1.61, 2.34, 3.00, 3.66, 4.35, 5.13, 6.06, 7.29, 9.24, 11.07, 13.39, 15.09]
    l6 = [0.87, 2.20, 3.07, 3.83, 4.57, 5.35, 6.21, 7.23, 8.56, 10.64, 12.59, 15.03, 16.81]
    l7 = [1.24, 2.83, 3.82, 4.67, 5.49, 6.35, 7.28, 8.38, 9.80, 12.02, 14.07, 16.62, 18.48]
    l8 = [1.65, 3.49, 4.59, 5.53, 6.42, 7.34, 8.35, 9.52, 11.03, 13.36, 15.51, 18.17, 20.09]
    l9 = [2.09, 4.17, 5.38, 6.39, 7.36, 8.34, 9.41, 10.66, 12.24, 14.68, 16.92, 19.68, 21.67]
    l10 = [2.56, 4.87, 6.18, 7.27, 8.30, 9.34, 10.47, 11.78, 13.44, 15.99, 18.31, 21.16, 23.21]
    l = [l0, l1, l2, l3, l4, l5, l6, l7, l8, l9, l10]
    return (l)

def getInterval(chisquare, degree):
    l = xsqlaw()
    lawdict = dict()
    lawdict = {0: 99, 1: 90, 2: 80, 3: 70, 4: 60, 5: 50, 6: 40, 7: 30, 8: 20, 9: 10, 10: 5, 11: 2, 12: 1}
    if (l[degree])[0] >= chisquare:
        return ([99, -1])
    for i in range (len(l[degree]) - 1):
        if (l[degree])[i] <= chisquare <= (l[degree])[i+1]:
            return ([lawdict[i+1], lawdict[i]])
    return ([-1, 1])
