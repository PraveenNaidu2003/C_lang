import json
a=[["ohm ","namo","shivaya"],["jai","sri","ram"],["amma","bhavani","lokalani","aalay","ohm kara rupavama"]]
b='{"age":18,"name":"ch ravi kumar satya sai praveen","class":"I year Btech","place":"tholeru"}'
bata=[]
tat=[json.dumps(["apple", "bananas"]),json.dumps(("apple", "bananas")),json.dumps("hello"),json.dumps(42),json.dumps(31.76),json.dumps(True),json.dumps(False),json.dumps(None)]
for a in tat:
    print(a,type(a))
    bata.append(json.loads(a))
print(bata,type(bata[0]))
li="maha prana rupam shivam shivam mamu kala rupam shivam shivam"
print(li,type(li))
li.split()