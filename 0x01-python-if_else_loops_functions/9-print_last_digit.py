#!/usr/bin/python3
def print_last_digit(number):
    end_num = (number % 10) if number >= 0 else ((number * -1) % 10)
    print(end_num, end='')
    return (end_num)
