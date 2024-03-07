A = 'scaler6~academy7~'
A = ''.join([char for char in A if not char.isnumeric()])
x = A.split('~')
x = [i for i in x if i]  # remove empty strings
print(x)


# A = ['scaler', 'academy']
# x=""
# for i in A:
#     n=len(i)
#     x+=str(i)+str(n)+"~"
# print(x)