wek=list(input("Enter the number of problems solved per each week").split())
x=0
for i in wek :
    if int(i)>=10 :
        x=x+1
print(x)