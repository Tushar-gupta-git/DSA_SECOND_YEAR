https://www.hackerrank.com/challenges/delete-a-node-from-a-linked-list/problem?isFullScreen=true


/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */

SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* llist, int position) {
SinglyLinkedListNode *lmao = llist;
if (position==0) {
lmao=lmao->next;
return lmao;
}
for (int i = 1; i<position; i++) {
    lmao =lmao->next;
}
lmao->next=lmao->next->next;
return llist;
}