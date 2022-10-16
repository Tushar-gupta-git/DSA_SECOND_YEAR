https://www.hackerrank.com/challenges/insert-a-node-at-a-specific-position-in-a-linked-list/problem?isFullScreen=true


/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode *lmao = new SinglyLinkedListNode(data);
    SinglyLinkedListNode *temp = llist;
    for (int i = 0; i<position-1; i++) {
       temp = temp->next;
    }
    lmao->next = temp->next;
    temp->next = lmao;
    
return llist;
}