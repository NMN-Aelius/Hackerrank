#!/bin/python3

import math
import os
import random
import re
import sys

def checknum(n):
    if n%2 ==0:
        cn = 1 #even
    else:
        cn = 0 #odd

    return cn

if __name__ == '__main__':
    n = int(input().strip())
    ck = checknum(n)
    if ck==0 or (ck==1 and n>=6 and n<=20):
        print("Weird")
    else:
        print("Not Weird")