n = int(input())
nol = 0
satu = 0
if (n == 0):print(1)
else:
    while(n > 0):
        if(n%2 == 1): satu += 1
        else: nol += 1
        n = n//2
    if(satu == nol):print(0)
    elif(nol > satu):print(nol-satu)
    else:
        ans = 0
        satu -= nol
        while(satu > 0):
            ans = ans*2 + 1
            satu -= 1
        print(ans)