else{
newHead = l2;
newTail = l2;
l2 = l2->next;
}
while(l1 != NULL and l2 != NULL){
if(l1->val < l2->val){
newTail->next = l1;
newTail = newTail->next;
l1 = l1->next;
}
else{
newTail->next = l2;
newTail = newTail->next;
l2 = l2->next;
}
}
if(l1 != NULL){
newTail->next = l1;
l1 = l1->next;
}
if(l2 != NULL){
newTail->next = l2;
}
return newHead;
}
};
​
​
​
​
​