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
    ListNode* rotate(ListNode* head, int k){
        if(k == 0) return head;
        if(head == NULL or head->next == NULL) return head;
        ListNode* prev = NULL, *curr = head, *tail = NULL;
        while(curr and curr->next){
            tail = curr->next;
            prev = curr;
            curr = curr->next;
        }
        prev->next = NULL;
        tail->next = head;
        head = tail;
        return rotate(head, k-1);
    }
    int len(ListNode* head){
        int n = 0;
        while(head != NULL){
            n++;
            head = head->next;
        }
        return n;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(k == 0) return head;
        if(head == NULL or head->next == NULL) return head;
        int n = len(head);
        k %= n;
        return rotate(head, k);
    }
};