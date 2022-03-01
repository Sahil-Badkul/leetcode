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
    ListNode* sortList(ListNode* head) {
        if(!head or !head->next){
            return head;
        }
        ListNode* mid = getMid(head);
        ListNode* left = sortList(head);
        ListNode* right = sortList(mid);
        return merge(left,right);
    }
    ListNode* merge(ListNode *list1, ListNode* list2){
        if(!list1){
            return list2;
        }
        if(!list2){
            return list1;
        }
        if(list1->val < list2->val){
            list1->next = merge(list1->next, list2);
            return list1;
        }else{
            list2->next = merge(list1, list2->next);
            return list2;
        }
    }
    ListNode* getMid(ListNode* head) {
        ListNode* midPrev = nullptr;
        while (head && head->next) {
            midPrev = (midPrev == nullptr) ? head : midPrev->next;
            head = head->next->next;
        }
        ListNode* mid = midPrev->next;
        midPrev->next = nullptr;
        return mid;
    }
};