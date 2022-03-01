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
    bool isPalindrome(ListNode* head) {
        ListNode *slow = head, *fast = head, *prev = NULL, *next = NULL;
        while(fast and fast->next){
            fast = fast->next->next;
            // reverse logic
            next = slow->next;
            slow->next = prev;
            prev = slow;
            slow = next;
        }
        // condition for even len;
        fast != NULL ? slow = slow->next : slow;
        while(slow){
            if(slow->val != prev->val) return false;
            slow = slow->next;
            prev = prev->next;
        }
        return true;
    }
};