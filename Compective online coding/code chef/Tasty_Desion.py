t=int(input())
for i in range(t) :
    cho,cdy=map(int,input().split())
    if 2*cho > 5*cdy :
        print("Chocolate")
    elif 2*cho < 5*cdy :
        print("Candy")
    else :
        print("Either")