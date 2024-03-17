#  WRITE A PROGRAM THAT ASKS THE USER TO ENTER THREE NUMBERS (USE THREE
# SEPARATE INPUT STATEMENTS).CREATE VARIABLES CALLED TOTAL AND AVERAGE THAT HOLD THE
# SUM AND
#  AVERAGE OF THREE NUMBERS AND PRINT OUT THE VALUES OF TOTAL AND AVERAGE.
x=int(input("enter the first number:"))
y=int(input("enter the second number:"))
z=int(input("enter the third number:"))
sum=x+y+z
avg=(x+y+z)/3
k="sum is {} and average is {}"
print(k.format(sum,avg))