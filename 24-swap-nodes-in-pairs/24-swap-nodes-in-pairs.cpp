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
    ListNode* swapPairs(ListNode* head) {
        ListNode* curr = head;
        if(curr == NULL){
            return head;
        }
        ListNode* next = curr->next;
        if(next != NULL){
            swap(curr->val, next->val);
            next = next->next;
            swapPairs(next);
        }
        return head;
    }
};