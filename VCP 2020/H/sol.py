s = input()
r = input()

s1 = 0
s2 = 0
r1 = 0
r2 = 0
r3 = 0

for i in range(len(s)):
    if(s[i] == '+'):
        s1 += 1
    elif(s[i] == '-'):
        s2 += 1
for i in range(len(r)):
    if(r[i] == '+'):
        r1 += 1
    elif(r[i] == '-'):
        r2 += 1
    elif(r[i] == '?'):
        r3 += 1

ans1 = s1 - r1
ans2 = s2 - r2
if(ans1 < 0 or ans2 < 0):
    print("%.12lf" % 0)
else:
    def f(x):
        tmp = 1
        for i in range(x):
            tmp *= i+1
        return tmp

    ans = f(r3)/(f(ans1)*f(ans2))/2**r3
    print("%.12lf" % ans)
