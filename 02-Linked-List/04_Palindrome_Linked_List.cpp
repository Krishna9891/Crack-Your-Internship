class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL) 
            return true;

        vector<int>stack;
        ListNode* fast=head;
        ListNode* slow=head;
        while(fast){
            stack.push_back(slow->val);
            if(fast==NULL || fast->next==NULL){
                break;}
            fast=fast->next->next;
            slow=slow->next;
        }
        while(!stack.empty()){
            if(stack.back()!=slow->val)
                return false;
            else{
                stack.pop_back();
                slow=slow->next;
            }
        }
        return true;
    }
};
