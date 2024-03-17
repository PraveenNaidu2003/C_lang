t=int(input())
for i in range(t):
    maxAmount,reqAmount=map(int,input().split())
    if reqAmount <= maxAmount:
        print(reqAmount)
    else :
        print(maxAmount)