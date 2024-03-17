t=int(input())
for i in range(t):
    iniWtrBkt,cptBkt,flwWtr,tme=map(float,input().split())
    if (cptBkt-iniWtrBkt) > (flwWtr*tme ) :
        print("unfilled")
    elif (cptBkt-iniWtrBkt) == (flwWtr*tme ) :
        print("filled")
    else :
        print("overflow")