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
    ListNode* reverse(ListNode* head){
        if(head == NULL or head->next == NULL) return head;
        ListNode* newNode = reverse(head->next);
        head->next->next = head;
        head->next = NULL;
        return newNode;
    }
    bool isPalindrome(ListNode* head) {
        if(head == NULL or head->next == NULL) return true;
        ListNode* mid = head, *fast = head->next;
        while(fast && fast->next){
            mid = mid->next;
            fast = fast->next->next;
        }
        mid->next = reverse(mid->next);
        mid = mid->next;
        fast = head;
        while(mid){
            if(fast->val != mid->val) return false;
            fast = fast->next;
            mid = mid->next;
        }
        return true;
    }
};