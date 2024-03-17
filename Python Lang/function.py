print("I am writing aq function in a programme")
x=89
print(x+56)
def fu(jai):
    jai=str(jai)
    global x;
    x=67
    print("jai balay Ganesh maha raj ki JAI"+jai)
fu(67)
print(x)
def fun(k):
    return lambda a,b:a*b/k
bun=fun(2)
print(bun(10,20))