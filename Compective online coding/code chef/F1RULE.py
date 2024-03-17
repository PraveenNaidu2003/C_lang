t=int(input())
for i in range(t):
    fstTme,chfTme=map(float,input().split())
    if chfTme <= ((107*fstTme)/100) :
        print("Yes")
    else :
        print("No")