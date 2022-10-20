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
    ListNode *getIntersectionNode(ListNode *head1, ListNode *head2) {
        ListNode* l1 = head1;
        ListNode* l2 = head2;
        while(l1 != l2){
            l1 = l1 == NULL ? head2 : l1->next;
            l2 = l2 == NULL ? head1 : l2->next;
        }
        return l1;
    }
};