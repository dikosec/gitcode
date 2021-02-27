N,K = map(int,input().split())

L = len(str(N))
for i in range(0,K):
    n = int(''.join(sorted(str(N), reverse= True)))
    L = len(str(n))
    if L==1:
        print(n)
    elif L==2:
        s=str(n)
        N=9*(int(s[0])-int(s[1]))
    elif L==3:
        s=str(n)
        N=99*(int(s[0])-int(s[2]))
    elif L==4:
        s=str(n)
        N=999*(int(s[0])-int(s[3]))+90*(int(s[1])-int(s[2]))
    elif L==5:
        s=str(n)
        N=9999*(int(s[0])-int(s[4]))+990*(int(s[1])-int(s[3]))
    elif L==6:
        s=str(n)
        N=99999*(int(s[0])-int(s[5]))+9990*(int(s[1])-int(s[4]))+900*(int(s[2])-int(s[3]))
    elif L==7:
        s=str(n)
        N=999999*(int(s[0])-int(s[6]))+99990*(int(s[1])-int(s[5]))+9900*(int(s[2])-int(s[4]))
    elif L==8:
        s=str(n)
        N=9999999*(int(s[0])-int(s[7]))+999990*(int(s[1])-int(s[6]))+99900*(int(s[2])-int(s[5]))+9000*(int(s[3])-int(s[4]))
    elif L==9:
        s=str(n)
        N=99999999*(int(s[0])-int(s[8]))+9999990*(int(s[1])-int(s[7]))+999900*(int(s[2])-int(s[6]))+99000*(int(s[3])-int(s[5]))
    elif L==10:
        s=str(n)
        N=999999999*(int(s[0])-int(s[9]))+99999990*(int(s[1])-int(s[8]))+9999900*(int(s[2])-int(s[7]))+999000*(int(s[3])-int(s[6]))+9000*(int(s[4])-int(s[5]))

print(N)
        

