SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* head, int data, int pos) {
    SinglyLinkedListNode* newNode = new SinglyLinkedListNode(data);
    
    if(pos == 0 ){
        newNode->next = NULL;
        return newNode;
    }
    else{
        SinglyLinkedListNode* temp = head;
        for(int i = 0 ; i < pos - 1 ; i++ ){
            temp=temp->next;
        }
        newNode->next=temp->next;
        temp->next=newNode;
        return head;

    }

}
