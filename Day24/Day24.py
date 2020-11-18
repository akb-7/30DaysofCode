class Node:
    def __init__(self,data):
        self.data = data
        self.next = None 
class Solution: 
    def insert(self,head,data):
            p = Node(data)           
            if head==None:
                head=p
            elif head.next==None:
                head.next=p
            else:
                start=head
                while(start.next!=None):
                    start=start.next
                start.next=p
            return head  
    def display(self,head):
        current = head
        while current:
            print(current.data,end=' ')
            current = current.next
    # this below function passes only 4 test cases in the final submission
    '''
    def removeDuplicates(self,head):
        #Write your code here
        current = head
        result = []
        while current:
            result.append(current.data)
            current = current.next
        result = list(set(sorted(result)))
        head = None
        for val in result:
            head = self.insert(head,val)
        return head
    '''
    # this function passes all the test cases in the final submission
    def removeDuplicates(self,head):
        #Write your code here
        if head==None:
            return None
        s = head 
        while s.next:
            if(s.data == s.next.data):
                s.next = s.next.next
            else:
                s = s.next
        return head
    
mylist= Solution()
T=int(input())
head=None
for i in range(T):
    data=int(input())
    head=mylist.insert(head,data)    
head=mylist.removeDuplicates(head)
mylist.display(head); 
