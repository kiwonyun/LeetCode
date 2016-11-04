/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int n1, n2, sum, c = 0;
        ListNode* prev = NULL;
        ListNode* res = NULL;
        while(l1 != NULL || l2 != NULL){
            if(l1 != NULL){
                n1 = l1->val;
                l1 = l1->next;
            }
            else
                n1 = 0;
                
            if(l2 != NULL){
                n2 = l2->val;
                l2 = l2->next;
            }
            else 
                n2 = 0;
                
            sum = n1 + n2 + c;
            if( sum >= 10 ){
                sum -= 10;
                c = 1;
            }
            else
                c = 0;
            
            ListNode* cur = new ListNode(sum);
            if( prev != NULL )
                prev->next = cur;
            else
                res = cur;
            
            prev = cur;
        }
        
        if( c != 0 ){
            ListNode* cur = new ListNode(1);
            prev->next = cur;
        }
        
        return res;
    }
};