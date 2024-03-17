from cgitb import text
from dataclasses import replace
from posixpath import split


print("Jai Shambo shoboi",type("Jai Shambo shoboi"))
shiva='amma'
print(shiva,type(shiva))
a=''' hi ma shivudu ma amma mana 
andhariki vundaga mana 
ki andhukju dandaga'''
for i in 'amma':    
    print(i)
j=0
for x in a:
    j=j+1
print(j)
print(len(a))
if 'hhh' in 'd aahhh ud':
    print(i)
print('RAMAM RAMA RAMA ' not in a)
print(78 if a==2 else 55)
if 'hi' in a:
    print('hi all')
if 'pokdspo' not in a:
    print("kjhskhd")
print('hi' in a)
print('kn' not in a)
print("Ram Ram Satya hey" if 'iudiugs' in a else 'Rama namamu Rama Namamu')
print(a[1:])
print(a[-55::2])
print()
rama='''sri rama jai rama jai jai rama
rama rama rama rama rama rama'''
print(rama[2::3])
v='srini vasa'
print(v[-1::-1])

print(v.upper())
print(v.lower())
print(v)
print(v.strip())
print(v.replace('sri','sir'))
print(v)
print(v.split('i'))
ma='    ma amma nana naku vundaga namku ame dandaga jai bavani jai jai bavani ohm namo shivaya      '
print(ma)
print(ma.strip())
print(type(ma.strip()))
ma=ma.strip()
print(ma.split())
print(type(ma.split()))
print(ma.split('a'))
print('i'+'am')
txt='baja ranga bali has {} pack'
print(txt.format(6))
age=78
print('baja ranga bali has',age,'pack')
txt='my name is shiva my life name is bhavani'
print(txt.capitalize())
txt=txt.upper()
print(txt)
print(txt.casefold())
print(txt.center(200))
print(txt.count('A'))