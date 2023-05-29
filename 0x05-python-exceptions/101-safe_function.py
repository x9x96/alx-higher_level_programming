#!/usr/bin/python3
from __future__ import print_function
import sys
def safe_function(fct, *args):
    try:
        cont = fct(*args)
    except Exception as exc:
        print("Exception: {}".format(exc), file=sys.stderr)
        return None
    else:
        return cont
