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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL){
            return head;
        }
        
        ListNode* headEven = head->next;
        ListNode* headEvenStart = headEven;
        ListNode* headOdd = head;

        while (headEven != NULL && headEven->next != NULL)  
        {
            headOdd->next = headEven->next;
            headOdd = headOdd->next;
            headEven->next = headOdd->next;
            headEven = headEven->next;
        }
        
        headOdd->next = headEvenStart;
        
        return head;
    }

};