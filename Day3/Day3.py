#!/bin/python3

import math
import os
import random
import re
import sys

def process(n):
    if n%2!=0:
        print("Weird")
    else:
        if n<=20 and n>=6:
            print("Weird")
        else:
            print("Not Weird")
if __name__ == '__main__':
    N = int(input())
    process(N)
