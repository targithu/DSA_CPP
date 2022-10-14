// You are given the head of a linked list. Delete the middle node, and return the head of the modified linked list.

// The middle node of a linked list of size n is the ⌊n / 2⌋th node from the start using 0-based indexing, where ⌊x⌋ denotes the largest integer less than or equal to x.

// For n = 1, 2, 3, 4, and 5, the middle nodes are 0, 1, 1, 2, and 2, respectively.
 

// Example 1:
// Input: head = [1,3,4,7,1,2,6]
// Output: [1,3,4,1,2,6]
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL) { return NULL;}
        int mid=0;
        int n=0;
     ListNode* tem=head;
        while(tem!=NULL) {
            n++;
        tem=tem->next;}
    mid=n/2;
        ListNode* temp=head;
     for(int i=0;i<mid-1;i++){
         temp=temp->next;
     }
            temp->next=temp->next->next;
        
        return head;
    }
};
