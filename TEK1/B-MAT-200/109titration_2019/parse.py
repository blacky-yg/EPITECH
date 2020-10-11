import sys

def usage():
    print("USAGE\n\t   ./109titration file\n\n")
    print("DESCRIPTION\n\t   file a csv file containing \"vol;ph\" lines")
    sys.exit(0)

def error():
    print("Type ./109titration -h for help", file=sys.stderr)
    sys.exit(84)

def check_av(ac, av):
    if (ac == 2 and "-h" in av):
        usage()
    if (ac != 2):
        error()

def my_getnbr(char):
    try:
        nb = int(char)
    except:
        try:
            nb = float(char)
        except:
            sys.exit(84)
    return (nb)

def get_data(buffer):
    buffer = buffer.split('\n')
    buff_len = len(buffer)
    data = []
    for i in range(buff_len):
        data.append([])
    for x in range(buff_len):
        try:
            data[x] = buffer[x]
            data[x] = data[x].split(';')
            data[x][0] = my_getnbr(data[x][0])
            data[x][1] = my_getnbr(data[x][1])
            if len(data[x]) != 2:
                error()
        except (ValueError, IndexError):
            error()
    if len(data) <= 4:
        error()
    for i in range(0, buff_len - 1):
        if data[i][0] >= data[i + 1][0]:
            error()
    for i in range(0, buff_len - 1):
        if not 0 <= data[i][1] <= 14:
            error()
        if data[i][1] > data[i + 1][1]:
            error()
    return (data)

def load_file_in_mem(av):
    try:
        fd = open(av[1], "r")
        buffer = fd.read()
    except FileNotFoundError:
        error()
    if (len(buffer) == 0):
        error()
    data = get_data(buffer)
    return (data)