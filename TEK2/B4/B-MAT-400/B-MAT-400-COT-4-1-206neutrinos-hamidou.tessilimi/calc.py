##
## EPITECH PROJECT, 2021
## 206neutrinos
## File description:
## calc
##

from math import *

def root_mean(art_mean, std_mean):
    rt_mean = sqrt((art_mean ** 2) + (std_mean ** 2))
    return (rt_mean)

def art_mean(value, ancient_mean, ancient_n, new_n):
    new_art = ((ancient_mean * ancient_n) + value) / new_n
    return (new_art)

def har_mean(value, ancient_har, ancient_n, new_n):
    new_har = new_n / ((ancient_n / ancient_har) + (1 / value))
    return (new_har)

def std_mean(value, ancient_mean, new_mean, ancient_std, ancient_n, new_n):
     new_std = sqrt((((value - new_mean) * (value - ancient_mean)) + ((ancient_n) * (ancient_std**2))) / new_n)
     return (new_std)
