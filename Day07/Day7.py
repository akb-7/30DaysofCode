#!/bin/python3

import math
import os
import random
import re
import sys



if __name__ == '__main__':
    n = int(input())

    arr = list(map(int, input().rstrip().split()))
    for i in range(0,len(arr)):
        print(arr[-i-1],end = " ")
