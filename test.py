from itertools import count
x=["bella","label","roller"]
#Output: ["e","l","l"]
for i in x:
    for j in i:
        if count(j)>1:
            print(j)