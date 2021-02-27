from sys import stdin
input = stdin.readline

n = int(input().rstrip())

a = list(map(int,input().split()))
b = list(map(int,input().split()))

cmax = 0
amax = 0
c = []

for i in range(n):
    amax = max(amax,a[i])
    c.append(max(cmax,amax*b[i]))
    cmax = c[i]

for i in range(0,n):
    print(c[i])