/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* removeDuplicates(SinglyLinkedListNode* head) {
    SinglyLinkedListNode* temp = head,*next;
    if(head == NULL){return NULL;}

    while(temp->next != NULL){
        next=temp->next;
        if(temp->data == next->data){
            temp->next=next->next;
            delete next;
        }
        else{
            temp=temp->next;
        }
    }
    return head;
}
