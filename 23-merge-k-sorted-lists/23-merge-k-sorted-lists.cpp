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
    ListNode* merge(ListNode *fst, ListNode* snd){
        if(!fst) return snd;
        if(!snd) return fst;
        if(fst->val <= snd->val){
            fst->next = merge(fst->next, snd);
            return fst;
        }else{
            snd->next = merge(fst, snd->next);
            return snd;
        }
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0) return NULL;
        ListNode* fst = lists[0];
        for(int i = 1; i < lists.size(); i++){
            fst = merge(fst, lists[i]);
        }
        return fst;
    }
};