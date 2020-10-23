import math

null = "-0.0000000000"

def compute_sum(n, x):
    sum = 1.0
    for k in range(0, int(n) + 1):
        if (x != 0):
            sum *= (math.sin(x / (2 * k + 1)) / (x / (2 * k + 1)))
    return sum

def func(n, a, b):
    midd = (b - a) * compute_sum(n, (a + b) / 2)
    return midd

def midpoint(n, b, k, h):
    print("Midpoint:")
    result = 0.0
    i = 0.0
    while i <= b - 0.5:
        result += func(n, i, i + 0.5)
        i += 0.5
    diff = result - (math.pi / 2)
    print("I" + str(int(n)) + " = " + "%.10f" % result)
    if (str(diff) == null):
        print("diff = " + "%.10f" % (diff))
    else:
        print("diff = " + "%.10f" % (-1 * diff))
    print()

def trapezoidal(n, b, k, h):
    print("Trapezoidal:")
    result = 0.0
    for i in range(1, k):
        result += compute_sum(n, i * h)
    result *= 2
    result += compute_sum(n, 5000) + compute_sum(n, 0)
    result *= h / 2
    print("I" + str(int(n)) + " = " + "%.10f" % result)
    diff = result - (math.pi / 2)
    if (str(diff) == null):
        print("diff = " + "%.10f" % (diff))
    else:
        print("diff = "  + "%.10f" % (-1 * diff))
    print()

def simpson(n, b, k, h):
    print("Simpson:")
    result = 0.0
    tmp = 0.0
    for i in range(1, k):
        result += compute_sum(n, i * h)
    for i in range(0, k):
        tmp += compute_sum(n, (i * h) + (h / 2))
    res = compute_sum(n, b) + compute_sum(n, 0) + (2 * result) + (4 * tmp)
    res *= b / (6 * k)
    print("I" + str(int(n)) + " = " + "%.10f" % res)
    diff = res - (math.pi / 2)
    if (str(diff) == null):
        print("diff = " + "%.10f" % (diff))
    else:
        print("diff = " + "%.10f" % (-1 * diff))