import sys
import math

def pair(nums, comb):
    result = get_result(2, comb, nums)
    print(": " + "%.2f" % result + "%")

def three(nums, comb):
    result = get_result(3, comb, nums)
    print("-of-a-kind: " + "%.2f" % result + "%")

def four(nums, comb):
    result = get_result(4, comb, nums)
    print("-of-a-kind: " + "%.2f" % result + "%")

def yams(nums, comb):
    result = get_result(5, comb, nums)
    print(": " + "%.2f" % result + "%")

def full(nums, comb):
    result = 0.0
    nb_time_1 = get_nb_time(int(comb[1]), nums)
    nb_time_2 = get_nb_time(int(comb[2]), nums)
    remainer = 5 - (nb_time_1 + nb_time_2)
    other_1 = 3 - nb_time_1
    other_2 = 2 - nb_time_2
    if (remainer == 0):
        result = 1
    else:
        if (other_1 > 0 and other_2 == 0):
            result = get_binomial(other_1, other_1)
        elif (other_1 == 0 and other_2 > 0):
            result = get_binomial(other_2, other_2)
        else:
            result_1 = math.factorial(remainer) / (math.factorial(other_1) * math.factorial(remainer - other_1))
            result_2 = math.factorial(remainer - other_1) / (math.factorial(other_2) * math.factorial(remainer - other_1 - other_2))
            result = (result_1 * result_2) / pow(float(6), remainer)
    print(" of " + comb[2] + ": " + "%.2f" % (result * 100) + "%")

def straight(nums, comb):
    remainer = 5
    result = 1
    if (get_nb_time(2, nums) >= 1):
        remainer = remainer - 1
    if (get_nb_time(3, nums) >= 1):
        remainer = remainer - 1
    if (get_nb_time(4, nums) >= 1):
        remainer = remainer - 1
    if (get_nb_time(5, nums) >= 1):
        remainer = remainer - 1
    if (comb[1] == '5'):
        if (get_nb_time(1, nums) >= 1):
            remainer = remainer - 1
    elif (comb[1] == '6'):
        if (get_nb_time(6, nums) >= 1):
            remainer = remainer - 1
    result = (math.factorial(remainer) / pow(float(6), remainer))
    print(": " + "%.2f" % (result * 100) + "%")

def get_nb_time(nb, nums):
    nb_time = 0
    for i in range(0, 5):
        if (nums[i] == nb):
            nb_time += 1
    return (nb_time)

def get_binomial(a, b):
    return (math.factorial(a) / (math.factorial(b) * math.factorial(a - b))) * pow(float(1 / 6), b) * pow((5 / 6), (a - b))

def get_result(nb, comb, nums):
    res = 0.0
    nb_time = get_nb_time(int(comb[1]), nums)
    remainer = 5 - nb_time
    other = nb - nb_time
    while (other < remainer + 1):
        res += get_binomial(remainer, other)
        other = other + 1
    return res * 100

def perform_action(nums, comb):
    combinaison = {
        "pair": pair, "three": three, "four": four,
        "full": full, "straight": straight, "yams": yams
    }
    for i in combinaison:
        if comb[0] == i:
            print("Chances to get a " + str(comb[1]) + " " + comb[0], end='')
            combinaison[i](nums, comb)
            return