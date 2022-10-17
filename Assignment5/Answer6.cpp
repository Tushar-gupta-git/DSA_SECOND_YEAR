https://www.hackerrank.com/challenges/get-the-value-of-the-node-at-a-specific-position-from-the-tail/problem?isFullScreen=true

int getNode(SinglyLinkedListNode* llist, int positionFromTail) {
    SinglyLinkedListNode *temp=llist;
    int linksize = 0;
    
    while (temp!=NULL) {
        // cout<<temp->data<<endl;
        linksize++;
        temp = temp->next;
        
    }
    // cout<<linksize;
    int count = 0;
    temp=llist;
    while (count<linksize-positionFromTail-1) {
        //  cout<<temp->data<<endl;
         count++;
        temp = temp->next;
    }
    return temp->data;
    
    

}
