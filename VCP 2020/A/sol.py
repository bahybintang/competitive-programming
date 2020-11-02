n,m = map(int, input().split())
step = 0
while(n != m):
    if(m%2 == 0 and m > n):
        m /= 2
    else:
        m += 1
    step += 1
print(step)