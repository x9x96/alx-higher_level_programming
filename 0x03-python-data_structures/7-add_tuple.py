#!/usr/bin/python3
def add_tuple(tuple_a=(), tuple_b=()):
    tuple = ()
    tupl1 = tuple_a + (0, 0)
    tupl2 = tuple_b + (0, 0)
    tuple = tupl1[0] + tupl2[0], tupl1[1] + tupl2[1]
    return tuple
