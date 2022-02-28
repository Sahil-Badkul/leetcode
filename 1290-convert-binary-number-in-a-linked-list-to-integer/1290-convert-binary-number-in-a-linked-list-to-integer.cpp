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
    ListNode *reverse(ListNode *head){
        if(!head){
            return head;
        }
        ListNode *curr = head, *prev = NULL, *next = NULL;
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    int getDecimalValue(ListNode* head) {
        ListNode *temp = reverse(head);
        int num = 0, base = 1;
        while(temp){
            num += (temp->val)*base;
            base *= 2;
            temp = temp->next;
        }
        return num;
    }
};