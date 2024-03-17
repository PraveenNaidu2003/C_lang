import random
fil=open("rand.txt","w+")
li=[]
for i in range(0,2365):
    fil.write(str(str(random.randrange(0,100))+"\n"))
print("sucess fully complected")