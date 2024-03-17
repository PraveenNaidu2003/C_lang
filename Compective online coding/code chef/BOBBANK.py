t=int(input())
for i in range(t) :
    iniAmt,depAmt,bnkCrg,totmon=map(int,input().split())
    print(iniAmt+(depAmt-bnkCrg)*totmon)