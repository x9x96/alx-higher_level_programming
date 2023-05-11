#!/usr/bin/python3
import hidden_4
if __name__ == "__main__":
    x = dir(hidden_4)
    for name in x:
        if name[:2] != "__":
            print("{}".format(name))
