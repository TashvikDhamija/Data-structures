/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
 SinglyLinkedListNode* insertNodeAtTail( SinglyLinkedListNode* head, int data) {
    SinglyLinkedListNode *newLast = new  SinglyLinkedListNode(data);
    if(head == nullptr){
        return newLast;
    }
    SinglyLinkedListNode *temp = head;

    while(temp->next != nullptr){
        temp = temp->next;
    }
    temp->next= newLast;
    return head;
}
