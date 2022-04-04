ListNode* swapNodes(ListNode* head, int k) {
ListNode*ptr1 = head,*ptr2 = head , *kth = NULL;
while(--k){
ptr1 = ptr1->next;
}
kth = ptr1;
ptr1 = ptr1->next;
while(ptr1){
ptr1 = ptr1->next;
ptr2 = ptr2->next;
}
swap(kth->val,ptr2->val);
return head;
}