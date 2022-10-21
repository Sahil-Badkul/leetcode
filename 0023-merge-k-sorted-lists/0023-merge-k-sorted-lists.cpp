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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<int> pq;
        for(auto &list : lists){
            while(list){
                pq.push(-1*list->val);
                list = list->next;
            }
        }
        ListNode* temp = new ListNode(0);
        ListNode* dummy = temp;
        while(!pq.empty()){
            temp->next = new ListNode(-1*pq.top());
            pq.pop();
            temp = temp->next;
        }
        return dummy->next;
    }
};