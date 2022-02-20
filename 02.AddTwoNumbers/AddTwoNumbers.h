/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry = 0;
        ListNode* previousNode = new ListNode();
        ListNode* headNode = previousNode;
        
        while (l1 || l2 || carry){
            
            int val1 = 0;
            int val2 = 0;
            
            if(l1) {
                val1 = l1 -> val;
                l1 = l1 -> next;
            }
            if(l2) {
                val2 = l2 -> val;
                l2 = l2 -> next;
            }
            
            headNode -> next = new ListNode((val1+val2+carry)%10);
            headNode = headNode -> next;
            
            carry = (val1+val2+carry)/10;
        }
        
        return previousNode -> next;
        
    }
};