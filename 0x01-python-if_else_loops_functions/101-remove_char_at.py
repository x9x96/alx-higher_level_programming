#!/usr/bin/python3
def remove_char_at(str, n):
    new = ""
    x = 0
    for car in str:
        if x != n:
            new += car
        x += 1
    return new
