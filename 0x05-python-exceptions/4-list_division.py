#!/usr/bin/python3
def list_division(my_list_1, my_list_2, list_length):
    n_list = []
    for i in range(0, list_length):
        try:
            comp = my_list_1[i]/my_list_2[i]
        except IndexError:
            comp = 0
            print("out of range")
        except ZeroDivisionError:
            comp = 0
            print("division by 0")
        except TypeError:
            comp = 0
            print("wrong type")
        finally:
            n_list.append(comp)
    return n_list
