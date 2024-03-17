t=int(input("Enter the number of test cases:"))
for i in range(t):
    lgt=int(input("Enter the length of the string:"))
    name=input("Enter the string:")
    fir=""
    sec=""
    for j in range(int(lgt/2)):
        fir=fir+name[j]
    for j in range(int(lgt/2),lgt):
        sec=sec+name[j]
    if fir==sec.lower() :
        print("YES")
    else :
        print("NO")