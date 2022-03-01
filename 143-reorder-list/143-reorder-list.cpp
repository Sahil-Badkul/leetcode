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
    ListNode* reverse(ListNode *list){
        ListNode *prev = nullptr, *next = nullptr, *curr = list;
        while(curr){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        //base case;
        if(!head or !head->next) return;
        // slow and fast for finding mid
        ListNode *slow = head, *fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        // reverse list after mid;
        ListNode *n2 = reverse(slow);
        ListNode *n1 = head, *temp = nullptr;
        while(n2 -> next){
            temp = n1->next;
            n1->next = n2;
            n1 = temp;
            
            temp = n2->next;
            n2->next = n1;
            n2 = temp;
        }
    }
};