class Solution:
    def reverselist(self,head):
        prev=None
        cur=head
        while cur is not None:
            next=cur.next
            cur.next=prev
            cur=next
        return prev
    def mergeResult(self,h1,h2):
        h1=self.reverselist(h1)
        h2=self.reverselist(h2)
        dummy=Node(0)
        temp=dummy
        while h1 is not None and h2 is not None:
            if h1.data>=h2.data:
                temp.next=h1
                h1=h1.next
            else:
                temp.next=h2
                h2=h2.next
            temp=temp.next
        if h1 is not None:
            temp.next=h1
        elif h2 is not None:
            temp.next=h2
        return dummy.next


#{ 
 # Driver Code Starts
#Initial Template for Python 3

#contributed by RavinderSinghPB
class Node:
    def __init__(self,data):
        self.data=data
        self.next=None

class Llist:
    def __init__(self):
        self.head=None
    
    def insert(self,data,tail):
        node=Node(data)
        
        if not self.head:
            self.head=node
            return node
        
        tail.next=node
        return node
        

def printList(head):
    while head:
        print(head.data,end=' ')
        head=head.next
        
if __name__ == '__main__':
    t=int(input())
    
    for tcs in range(t):
        
        n1,n2=[int(x) for x in input().split()]
        
        arr1=[int(x) for x in input().split()]
        ll1=Llist()
        tail=None
        for nodeData in arr1:
            tail=ll1.insert(nodeData,tail)
            
            
        arr2=[int(x) for x in input().split()]
        ll2=Llist()
        tail=None
        for nodeData in arr2:
            tail=ll2.insert(nodeData,tail)
        
        
        ob = Solution()
        resHead=ob.mergeResult(ll1.head,ll2.head)
        printList(resHead)
        print()
        
    
    
# } Driver Code Ends