class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> STACK;
        int carry = 0;
        
        //  SUM TWO LIST AND SAVE IT TO STACK
        while(l1 != NULL || l2 != NULL){
            int a,b;
            if(l1 != NULL) { a = l1->val; l1 = l1->next; }
            else { a = 0; }        
            if(l2 != NULL) { b = l2->val; l2 = l2->next; }
            else { b = 0; }
            
            STACK.push((a + b + carry) % 10);
            carry = (a + b + carry) / 10;
        }
        if(carry > 0) { STACK.push(carry); }
        
        //  SAVE SUM TO A NEW LIST
        ListNode* SUM = nullptr;
        while(!STACK.empty()){
            ListNode* newNode = new ListNode;
            newNode->val = STACK.top();
            newNode->next = SUM;
            SUM = newNode;
            STACK.pop();
        }
        
        //  RETURN THE RESULT
        return SUM;
    }
};