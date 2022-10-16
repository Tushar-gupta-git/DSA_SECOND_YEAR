https://www.hackerrank.com/challenges/insert-a-node-at-the-tail-of-a-linked-list/problem?isFullScreen=true

SinglyLinkedListNode* insertNodeAtTail(SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode *temp = new SinglyLinkedListNode(data);
        temp->next=NULL;
    if(head == NULL){
        return temp;
    }
    SinglyLinkedListNode *lmao = head;
    while(lmao->next!=NULL){
        lmao = lmao->next;
    }
    lmao->next=temp;
    return head;


}
