#!/usr/bin/python
n = int(raw_input())
w = 1
while w <= n:
    print " " * (n - w) + "#" * w
    w += 1
