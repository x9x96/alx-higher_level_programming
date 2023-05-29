#!/usr/bin/python3
def safe_print_list(my_list = [], x = 0):
    try:
        for evrytin in range(0, x):
            print("{}".format(my_list[evrytin]), end = "")
        print("")
    except IndexError:
        print("")
        return evrytin
    return x
