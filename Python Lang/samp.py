x=[56,78,'hi',"all"]
y=23,51,"hi",'all'
print(x)
for i in x:
    print(i)
print(x,type(x))
print(y,type(y))
a={'name':"",'age':0,}
b={"name":"",'age':0,"gender":""}
print(a,type(a))
class distn:
    name="ravi"
    age=19
    def jun(melf,std,sub):
        melf.studing=std
        melf.subject=sub
c1=distn()
c1=distn.jun(c1,"btech 1 st year","python")
print(10>11)