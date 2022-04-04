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
    ListNode* swapNodes(ListNode* head, int k) {
        int n = 0;
        ListNode* temp = head, *fst, *snd;
        
        while(temp != NULL){
            if(n+1 == k){
                // cout<<temp->val<<endl;
                fst = temp;
            }
            temp = temp->next;
            n++;
        }
        n -= k;        
        temp = head;
        while(temp && n--){
            temp = temp->next;
        }
        snd = temp;
        // cout<<snd->val<<endl;
        swap(fst->val, snd->val);
        return head;
    }
};