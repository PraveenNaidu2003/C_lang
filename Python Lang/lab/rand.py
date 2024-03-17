# .AIM: Write a program that generates a list of 20 random numbers between 1 and
# 100.
# (a) Print the list.
# (b) Print the average of the elements in the list.
# (c) Print the largest and smallest values in the list.
# (d) Print the second largest and second smallest entries in the list
# Print how many even numbers are in the list.
import random
even=[]
odd=[]
x=[]
for i in range(20):
    x.append(random.randint(1,100))
print(x)
for i in x:
    even.append(i) if i%2==0 else odd.append(i)
print("total even numbers are ",len(even),"total odd numbers are ",len(odd))
sum=0
for i in x:
    sum+=i
print("Average of the numbers is",sum/20)
ma=max(x)
print(ma)
x.remove(ma)
print("second largest number is ",max(x))
mi=min(x)
x.remove(mi)
print("second smallest element is ",min(x))
