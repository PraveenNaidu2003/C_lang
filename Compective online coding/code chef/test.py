r=int (input())
for i in range(r) :
    s=0
    arr=map(int,input().split())
    for i in arr :
        if i > 10 :
            s=s+1   
        print(s) 
        for i in arr :
            print(i)