from re import I

li=[]
fnme=str(input("Enter the name of the file:"))
fil1=open("pb1.txt","r+")
for i in fil1:
    li.append(float(i.replace("\n","")))
print(dir(I))