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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* ptr = head->next;
        ListNode* preptr = head;
        while (ptr != NULL){
            int s = 0;
                while(ptr -> val != 0){
                s += ptr -> val;
                ptr = ptr -> next;
                }
            preptr -> next -> val = s;
            preptr = preptr -> next;
            ptr = ptr -> next;
            preptr -> next = ptr;
        }
        return head-> next;
    }
};