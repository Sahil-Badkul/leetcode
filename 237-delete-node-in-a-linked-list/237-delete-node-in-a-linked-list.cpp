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
    void deleteNode(ListNode* node) {
        //We can't delete node directly but....... We can delete next node by copying its value in current node
        ListNode *next = node->next;
        *node = *next;
        delete next;
    }
};