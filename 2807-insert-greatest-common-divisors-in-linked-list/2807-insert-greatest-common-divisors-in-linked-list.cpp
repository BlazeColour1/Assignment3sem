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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        int a,b,temp;
        ListNode* ptr = head;
        ListNode* preptr = ptr;
        while (ptr -> next != NULL){
            preptr = ptr;
            ptr = ptr -> next;
            ListNode* newnode = new ListNode();
            a = preptr -> val;
            b = ptr -> val;
            while (b !=0){
                temp = b;
                b = a % b;
                a =temp;
            }
            newnode -> val = a;
            preptr -> next = newnode;
            newnode -> next = ptr;
        }
        return head;
    }
};