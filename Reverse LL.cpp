/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* reverse(SinglyLinkedListNode* head) {
        SinglyLinkedListNode* prev = NULL,*current = head, *next ;
        while(current != NULL){
            next= current->next;
            current->next = prev;
            prev= current;
            current= next;
    }
    head = prev;
    return head;
}
