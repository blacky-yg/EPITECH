##
## EPITECH PROJECT, 2021
## trade
## File description:
## Utils
##

def parse_cmd(string, start):
    result = False
    try:
        if (string[:-(len(string) - len(start))] == start):
            result = True
    except:
        return (False)
    return (result)

def get_float(string, next):
    value = 0.0
    try:
        value = float(string[(len(next) + 1):])
    except:
        return (None)
    return (value)

def get_string(string, next):
    res = ""
    try:
        res = string[(len(next) + 1):]
    except:
        return ("")
    return (res)