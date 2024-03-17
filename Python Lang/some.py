from pydoc import safeimport


name='ravi'
Name='Ravi'
print(name,Name)
def fun():
    global Name
    #global sai
    sai=63
    Name=52
    print("I am ",Name)
    print(sai)    
fun()
print(sai)
print('His name is',Name)
Name=52
#Name=str(Name)
print('jai',Name)
print(Name+25)
