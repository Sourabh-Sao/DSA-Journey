// leetcode solution

// ListNode* reverseList(ListNode* head) {
//         ListNode* prev=NULL;
//         ListNode* next=NULL;
//         ListNode* current=head;

//         while(current!=NULL){
//             next=current->next;  //moving next to current->next

//             current->next=prev;  // reversing the link of current node to prev node
//             prev=current;  // moving prev to current

//             current=next; // moving current to next
//         }

//         returun prev;

// code will be in the same sequence as above 