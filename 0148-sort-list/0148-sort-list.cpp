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
    ListNode* getMid(ListNode* head){
        if(!head) return NULL;
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
    ListNode* merge(ListNode* left, ListNode* right){
        ListNode* ans = new ListNode(0);
        ListNode* temp = ans;
        if(!left) return right;
        if(!right) return left;
        while(left && right){
            if(left->val < right->val){
                temp->next = left;
                temp = temp->next;
                left = left->next;
            }else{
                temp->next = right;
                temp = temp->next;
                right = right->next;
            }
        }
        if(left != NULL) temp->next = left;
        if(right != NULL) temp->next = right;
        return ans->next;
    }
    ListNode* sortList(ListNode* head) {
        if(head == NULL or head->next == NULL) return head;
        ListNode* mid = getMid(head);
        ListNode* left = head;
        ListNode* right = mid->next;
        mid->next = NULL;
        left = sortList(left);
        right = sortList(right);
        ListNode* res = merge(left, right);
        return res;
    }
};