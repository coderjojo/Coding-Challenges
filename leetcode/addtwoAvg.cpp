/* Runtime: 40 ms, faster than 5.37% of C++ online submissions for Add Two Numbers. Optimization needed */

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
        ListNode* l3 = new ListNode(0);
        ListNode* head = l3;
        int c = 0;
        
        while(l1||l2){
            if(l1){
                c += l1->val;
                l1 = l1->next;    
            }
            if(l2){
                c += l2->val;
                l2 = l2->next;
            }
            
            l3->val = c % 10;
            c = c / 10;
            
            if(l1 || l2 || c){
                l3->next = new ListNode(c);
                l3 = l3->next;
            }
            
        }
        
        return head;
        
    }
};