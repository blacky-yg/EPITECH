import math

def get_pick_point(data, derivee, len_data):
    null = 0.0
    result = []
    result.append(1)
    result.append(0)
    for i in range(1, len_data):
        if derivee[i] > null:
            null = derivee[i]
            result[0] = data[i][0]
            result[1] = i
    return result

def first_derivate(data):
    derivee = []
    derivee.append(0)
    len_data = len(data) - 1
    print("Derivate:")
    for i in range(1, len_data):
        result1 = (data[i][1] - data[i - 1][1]) / (data[i][0] - data[i - 1][0])
        result2 = (data[i + 1][1] - data[i][1]) / (data[i + 1][0] - data[i][0])
        result = (((data[i + 1][0] - data[i][0]) * (result1)) + ((data[i][0] - data[i - 1][0]) * (result2))) /\
                                (data[i + 1][0] - data[i - 1][0])
        derivee.append(result)
        print("%.1f ml -> %.2f" % (data[i][0], derivee[i]))
    pick_point = get_pick_point(data, derivee, len_data)
    derivee.append(0)
    print("\nEquivalent point at %.1f ml\n" % pick_point[0])
    return derivee

def second_derivate(data, derivee):
    len_derivee = len(derivee) - 3
    print("Second derivate:")
    for i in range(1, len_derivee):
        image1 = (derivee[i + 1] - derivee[i]) / (data[i + 1][0] - data[i][0])
        image2 = (derivee[i + 2] - derivee[i + 1]) / (data[i + 2][0] - data[i + 1][0])
        image = (((data[i + 2][0] - data[i + 1][0]) * image1) + ((data[i + 1][0] - data[i][0]) * image2)) /\
                            (data[i + 2][0] - data[i][0])
        print("%.1f ml -> %.2f" % (data[i + 1][0], image))

def estimate_second(data, derivee):
    print("\nSecond derivate estimaed:")

def titration(data):
    derivee = first_derivate(data)
    second_derivate(data, derivee)
    estimate_second(data, derivee)