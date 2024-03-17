import os
if os.path.exists("claa.c"):
  os.remove("claa.c")
  os.remove("a.exe")
else:
  print("The file does not exist")