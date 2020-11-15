#!/bin/python3

import sys

n = int(input().strip())
a = list(map(int, input().strip().split(' ')))
# Write Your Code Here
result = 0
for i in range(0,n):
    for j in range(0,n-1):
        if a[j]>a[j+1]:
            a[j],a[j+1] = a[j+1],a[j]
            result+=1
print("Array is sorted in {} swaps.".format(result))
print("First Element: {}".format(a[0]))
print("Last Element: {}".format(a[-1]))
