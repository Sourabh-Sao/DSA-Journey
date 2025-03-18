// below code is to get the node from where the cycle starts
ListNode *detectCycle(ListNode *head) {
    ListNode *slow=head;
    ListNode *fast=head;
    bool isCycle=false;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            isCycle=true;
            break;
        }
    }
    if(!isCycle){
        return NULL;
    }
    slow=head;
    while(slow!=fast){
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
}

//The below code is to remove the cycle
ListNode *detectCycle(ListNode *head) {
    ListNode *slow=head;
    ListNode *fast=head;
    bool isCycle=false;

    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            isCycle=true;
            break;
        }
    }
    if(!isCycle){
        return NULL;
    }
    slow=head;
    ListNode *prev=NULL  
    while(slow!=fast){
        slow=slow->next;
        prev=fast; 
        fast=fast->next;
    }
     prev->next=NULL;
    return slow;
}
