#code to check straight line
def checkstraightline(a):
    if (a[0][0] == a[1][0] == a[2][0]):
        print("Yes")
    elif (a[0][1] == a[1][1] == a[2][1]):
        print("Yes")
    else:
        print("No")
    
a=checkstraightline([[1,2],[2,3],[3,4]])
b=checkstraightline([[1,1],[2,2],[3,4],[4,5],[5,6],[7,7]])
#true case
c=checkstraightline([[1,1],[2,2],[3,3],[4,4],[5,5],[6,6]])
