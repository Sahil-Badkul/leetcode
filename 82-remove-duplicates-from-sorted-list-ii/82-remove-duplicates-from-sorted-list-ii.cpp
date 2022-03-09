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
    ListNode* deleteDuplicates(ListNode* head) {
        // sentinel
        ListNode* sentinel = new ListNode(0, head);
        // predecessor = last node
        // before the sublist of duplicates
        ListNode* pred = sentinel;
        while(head != NULL){
            // if it's a beginning of duplicates sublist skip all duplicates
            if(head->next != NULL && head->val == head->next->val){
                // move till the end of duplicates sublist
                while(head->next != NULL && head->val == head->next->val) {
                    head = head->next;
                }
                // skip all duplicates
                pred->next = head->next;
            }else{ // move predecessor
                pred = pred->next;
            }
            // move forward
            head = head->next;
        }
        return sentinel->next;
    }
};