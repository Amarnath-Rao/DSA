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

"""
class Solution:
    def solve(self, ind, n, st, nums):
        # base case
        if ind == n:
            st.add(tuple(nums))
            return

        for i in range(ind, n):
            nums[ind], nums[i] = nums[i], nums[ind]
            self.solve(ind + 1, n, st, nums)
            nums[ind], nums[i] = nums[i], nums[ind]

    def uniquePerms(self, arr, n):
        st = set()
        ans = []
        # {ind, n, freq, st}
        self.solve(0, n, st, arr)
        for it in st:
            ans.append(list(it))
        return ans

"""