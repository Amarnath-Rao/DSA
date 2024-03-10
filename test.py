from collections import OrderedDict

str = "geEksforGEeks"
od = OrderedDict.fromkeys(str)
x = ''.join(od.keys())
print(x)