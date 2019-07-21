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
    
    ListNode* reverseList(ListNode* head) {
        ListNode* reversedList = NULL;
        while(head){
            ListNode* nextNode = new ListNode(head->val);
            nextNode->next = reversedList;
            reversedList = nextNode;
            head = head->next;
        }
        
        return reversedList;
    }
};