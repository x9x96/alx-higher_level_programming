#!/usr/bin/python3

"""class definaton"""


class Square:
    """pubic class attribute"""
    _size = None

    def __inint__(self, size=0):
        """Instantiation with optional size"""
        if type(size) is int:
            if size < 1:
                raise ValueError("size must be >= 0")
            else:
                self._size = size
        else:
            raise TypeError("size must be an integer")
