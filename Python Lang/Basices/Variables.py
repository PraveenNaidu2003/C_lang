import string

#Decalring Varibles
x=5
print(x,type(x))
x=str(x)
print(x,type(x))
y="HI Shiva"
z='Hi Amma'
print(y,z)
print(type(y),type(x),type(z))
#Type casting Varibles
a=57
print(a,type(a))
a=float(a)
print(a,type(a))
a=complex(a)
print(a,type(a))
#Assing Multiple varibles
p,q,r="ohm",'Namo','Shiva'
print(p,q,r)
print(p+q+r)
print(type(p),type(q),type(r))
#one Valu to Multiple Varibles
x=y=z='Hi Bhavan Amma!....'
'Hi Bhavan Amma!....'
print(x,y,z)
x=y=z=648
print(x,y,z)
#packing And UnPlacking
Amma=["Bhavani","Lakshmi",'Saraswathi','Ganga Amma','Sheetha','Radha']
a=Amma
Amma='ab'
print(a)
print(Amma)
#Output Variables
print("Hi Ganesh!..")
x='Hi Ganesh!..'
print(x)
x='Hi'
y='Ganesh'
z="!.."
print(x,y,z)
#String Concactination
print(x+y+z)
print(x,y+z)
A=x+y+z
print(A)
a,b,c=9.00000000000001,5,11.0001
A=a+b+c
print(A)
#A=x+a This ia a error Because A value Can not be added to a non valued Thing
print(x+b)
#Global Variables
