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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        
        if(head == NULL)
            return NULL; //Handled an edge case
        
        ListNode *temp, *curr = head, *prev = NULL;
        while(m > 1){
            prev = curr;
            curr = curr->next;
            m--;
            n--;//Only relative shifting of variable n. Doesn't make a difference to the logic
    }
    //Through this We have traversed till the mth node.
        
        ListNode *con = prev, *tail = curr;
          //Two nodes to help the set the connections of the list at the end of sublist reversal
        
        while(n > 0)
        { //The actual reversal happens here
            temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
            n--;
        }
        //Setting the connections to complete sublist reversal
        if(con != NULL)
        {
            con->next = prev;
        }else
        { //To handle the case if m=0
            head = prev;
        }
        
        tail->next = curr; //Even if current node is NULL, the tail node is the last node of the new list which in turn points to null
        return head;
    }
};
