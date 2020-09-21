#!/usr/bin/python
from sys import stdin, stdout

def main():
    n = int(stdin.readline())
    d = {}
    ans = []
    for i in xrange(n):
        s = stdin.readline().strip()
        if s not in d:
            ans.append(s)
            d[s] = 1
    
    stdout.write(str(len(d)) + '\n')
    stdout.write(" ".join(ans) + '\n')

if __name__ == "__main__":
    main()
