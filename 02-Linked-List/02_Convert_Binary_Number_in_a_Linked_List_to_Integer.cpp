class Solution {
public:
    int getDecimalValue(ListNode* head) {
       int dec=0;
       while(head!=NULL){
        dec=dec*2+head->val;
        head=head->next;
       }
       return dec;
    }
};
