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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* slow = head, *fast = head;
        while(n--) fast = fast->next;
        if(fast == NULL) return head->next;
        while(fast->next){
            fast = fast->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
        return head;
    }
    /*
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        int len = 0;
        while(curr) curr=curr->next, len++;
        if(len == n) return head->next;
        curr = head;
        for(int i = 1; i < len-n; i++){
            curr = curr->next;
        }
        curr->next = curr->next->next;
        return head;
    }
    */
};