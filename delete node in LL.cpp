/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int pos) {
    SinglyLinkedListNode *temp = head, *prev=NULL;
    if(pos==0){
        return head->next;
    }
    for(int i=0; i<pos && temp != NULL; i++){
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    delete temp;
    return head;
}
