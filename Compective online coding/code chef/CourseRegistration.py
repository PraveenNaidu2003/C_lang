t=int(input())
for i in range(t):
    grpsiz,cptcurs,enrgrp=map(int,input().split())
    if cptcurs>=grpsiz+enrgrp :
        print("Yes")
    else :
        print("No")