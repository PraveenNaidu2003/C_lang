from ntpath import join
class reverse:
    def rev(self,word):
        print(word)
        li=word
        li=li.split()
        print(" ".join(reversed(li)))
        
re1=reverse()
li=input("enter the statement:")
re1.rev(li)