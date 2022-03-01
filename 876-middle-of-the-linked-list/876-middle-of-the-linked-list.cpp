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
    int getLen(ListNode* head){
        ListNode* curr = head;
        int cnt = 0;
        while(curr){
            cnt++;
            curr = curr->next;
        }
        return cnt;
    }
    ListNode* middleNode(ListNode* head) {
        ListNode* temp = head;
        int mid = ceil(getLen(temp)/2);
        cout<<mid<<endl;
        while(mid--){
            head = head->next;
        }
        return head;
    }
};