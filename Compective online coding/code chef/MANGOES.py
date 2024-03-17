t=int(input())
for i in range(t) :
    wgtMgo,trkwgt,brgcap=map(int,input().split())
    print(int((brgcap-trkwgt)/wgtMgo))