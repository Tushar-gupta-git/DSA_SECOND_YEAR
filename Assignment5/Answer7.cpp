https://www.hackerrank.com/challenges/detect-whether-a-linked-list-contains-a-cycle/problem?isFullScreen=true
bool has_cycle(SinglyLinkedListNode* head) {
    if(head==NULL){
        return false;
    }
    
    SinglyLinkedListNode *fast = head;
    SinglyLinkedListNode *slow = head;
    
    while(fast&&fast->next->next){
        fast = fast->next->next;
        slow= slow->next;
        if(fast == slow){
            return true;
        }
    }
    return false;
}

