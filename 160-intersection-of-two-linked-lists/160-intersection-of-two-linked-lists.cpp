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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *fst = headA, *snd = headB;
        while(fst != snd){
            if(fst == NULL){
                fst = headB;
            }
            else
                fst = fst->next;
            if(snd == NULL){
                snd = headA;
            }
            else 
                snd = snd->next;
        }
        return fst;
    }
};