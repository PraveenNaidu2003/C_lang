import random
from tkinter import INSERT


x=5j    
print(x,type(x))
li=[5,6,7]
print(type(li),li)
a,b,c=li
print(a+b,c,len(li))
ana=list(("hi","all"))
a,b=ana
print(a,b,ana,type(ana),len(ana))
ma=[56,21,41,"jai ganesha",47,42,32,20,10]
print(ma[1]+ma[2])
print(ma[1:11:2])
print(ma[:3])
print(ma)
print(ma[3:6])
print(ma[::2])
print(ma[:6:2])
print(ma[::2])
print(ma[-1::-2])
print(ma[::2])
if 41 in ma:
    print("yes ma")
if 42 in ma:
    print("mava ")
print(ma,ma[2])
ma[2:3]=1002,2003,2002                
print(ma,ma[2])
ma.insert(11,"banana")
print(ma)
ma.append("choclet")
print(ma)
ma.insert(0,'amma')
print(ma)
for i in ma:
    print(i)
jkj=[]
for i in range(len(ma)):
    print(ma[i])    
for i in ma:
    jkj.append(i)
print(jkj)
nc=[6,565,6,4,554]
print(nc)
d=265,655,6,634,35,3,535,6564,2564,+5,+64,46+4,65
print(d,type(d))
print(random.randrange(0,444,15))
p=89
q=90.99
r='hi shiva'
print(p,q,r,type(p),type(q),type(r))
 
print(p,type(p))
li=['jk','kkj','hjdh','hdh']
li.insert(1,'hdj')
print(li)
def nmbn(a,c,b):
    return a+b+c/3