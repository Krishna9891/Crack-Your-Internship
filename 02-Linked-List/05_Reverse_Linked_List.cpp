class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* pre=NULL;
        ListNode* current=head;
        ListNode* post;
        while(current!=NULL){
            post=current->next;
            current->next=pre;
            pre=current;
            current=post;
        }
        return pre;
    }
};
