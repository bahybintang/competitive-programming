#!/usr/bin/python
from sys import stdin, stdout

def bfs(mat, posx, posy):
    if posy == len(mat[0]) or posy == -1:
        return (0, 0, 0, 0)
    if (posx == len(mat) - 1):
        return (mat[posx][posy], mat[posx][posy], 1, 1)
    elif mat[posx][posy] == 0:
        return bfs(mat, posx + 1, posy)
    else:
        x = bfs(mat, posx + 1, posy + 1)
        y = bfs(mat, posx + 1, posy - 1)
        if x[0] > y[0]:
            fmaxs = x[2]
        elif x[0] == y[0]:
            fmaxs = min(x[2], y[2])
        else:
            fmaxs = y[2]
        
        if x[1] > y[1]:
            fmins = x[3]
        elif x[1] == y[1]:
            fmins = min(x[3], y[3])
        else:
            fmins = y[3]

        maxs = mat[posx][posy] + max(x[0], y[0])
        mins = mat[posx][posy] + min(x[1], y[1])
        return (maxs, mins, fmaxs + 1, fmins + 1)

def main():
    mat = []
    m, n = [ int(x) for x in stdin.readline().split() ]
    for i in xrange(m):
        mat.append([ 0 if x == '.' else int(x) for x in stdin.readline().split() ])

    arr = [ bfs(mat, 0, y) for y in xrange(n) ]
    maxs = -999999999999999999999999
    mins = 999999999999999999999999
    idxmaxs = idxmins = 0
    fmaxs = fmins = 0
    for i, x in enumerate(arr):
        if x[0] > maxs: 
            maxs = x[0]
            idxmaxs = i
            fmaxs = x[2]
        if x[1] < mins:
            mins = x[1]
            idxmins = i
            fmins = x[3]

    stdout.write("{} {} {}\n".format(idxmaxs + 1, maxs, fmaxs))
    stdout.write("{} {} {}\n".format(idxmins + 1, mins, fmins))


if __name__ == "__main__":
    main()
