# print('enter the number value in list:')
# lis=[]
# for i in range(6):
#     x=int(input())
#     lis.append(x)
# print(lis)
# lis.sort()
# print(type(lis[2]),lis)
# print(lis[0]+lis[1])
# lis.clear()
# print('Enter the names in the list:')
# for i in range(6):
#     x=input()
#     lis.append(x)
# lis.sort()
# print(lis)
x=56,23,'hduh'
print(x,type(x))
x=list(x)
x.append('mango')
n,*x=x
print(type(x),x)
x=tuple(x)
print(x,type(x))
y,*m,n=x

print(y,m,n,type(y),type(m))
print(x)