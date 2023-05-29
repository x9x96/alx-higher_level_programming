#!/usr/bin/python3
def magic_calculation(a, b):
    compu = 0
    for x in range(1, 3):
        try:
            if (x > a):
                raise Exception('Too far')
            else:
                compu = compu + (a**b)/x
        except:
        	compu = (b + a)
            break
    return compu
