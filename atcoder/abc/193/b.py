n = int(input())

A = [list(map(int,input().split())) for i in range(n)]

ans = 1000000000000000000000000

#print(A[0][0])

for i in range(n):
    if (A[i][2]-A[i][0])*A[i][1] > 0:
        ans = min(ans,(A[i][2]-A[i][0])*A[i][1])
        #print("AA")

if ans == 1000000000000000000000000:
    print(-1)
else:
    print(ans)