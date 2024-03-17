# AIM: Write a program that reads a list of temperatures from a file called
# temps.txt, converts
# t hose temperatures to Fahrenheit, and writes the results to a file called
# ftemps.txt.
fil=open("temps.txt")
fil2=open("ftemp.txt","w+")
for i in fil:
    tem=float(fil.readline())
    print(tem)
    far=str(1.8*tem+32)
    fil2.write(far+"\n")
fil.close()
fil2.close()