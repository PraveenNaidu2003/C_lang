import txxt
import json
print(type(txxt.a),txxt.a,type(txxt.a[0]),txxt.a[0],txxt.a[0],type(txxt.a[0]))
x=json.loads(txxt.b)
print(x,type(txxt.b))
print(x["age"])
z=json.dumps(txxt.b)
print(z,type(z))
txxt.b=json.loads(txxt.b)
