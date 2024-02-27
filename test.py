
class Solution(object):
    def isSameTree(self, p, q):
        if not p and not q:
            return True
        if not p or not q:
            return False
        return p.val == q.val and self.isSameTree(p.left, q.left) and self.isSameTree(p.right, q.right)



"""

int* game_with_number(int arr[], int n)
{
    
    // Complete the function
    for(int i=0;i<n-1;i++){
        arr[i]= (arr[i] | arr[i+1]);
    }
    return arr;
    
}

"""