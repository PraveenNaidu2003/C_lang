
# .AIM: Write a program that asks the user to enter two strings of the same length.
# The program
# should then check to see if the strings are of the same length. If they are
# not, the program
# should print an appropriate message and exit. If they are of the same
# length, the program
# should alternate the characters of the two strings. For example, if the user
# enters
# abcdeandABCDE the program should print out AaBbCcDdEe.
x=input("enter first name:")
y=input("enter second name:")
if (len(x)!=len(y)):
    print("Not of same length")
else:
    for i in range(len(x)):
        print(x[i]+y[i],end="")