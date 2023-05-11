#!/usr/bin/python3
from sys import argv
if __name__ == "__main__":
    x = 0
    for argument in range(1, len(argv)):
       x += int(argv[argument])
    print("{}".format(x))
