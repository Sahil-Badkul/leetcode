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
        vector<int> helper;
        ListNode* temp = head;
        while(temp){
            helper.push_back(temp->val);
            temp = temp->next;
        }
        // sort 
        sort(helper.begin(),helper.end());
        ListNode* newHead = head;
        int i = 0;
        while(head){
            head->val = helper[i++];
            head = head->next;
        }
        return newHead;
    }
};