int lengthLL(SinglyLinkedListNode* head){
    SinglyLinkedListNode* temp=head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

int findMergeNode(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
    SinglyLinkedListNode* temp1=head1, *temp2=head2;
    int n1= lengthLL(head1);
    int n2= lengthLL(head2);

    if(n1>n2){
        for(int i=0;i<n1-n2;i++){
            temp1=temp1->next;
        }
    }
    else{
        for(int i=0;i<n2-n1;i++){
            temp2=temp2->next;
        }
    }

    while(temp1 != temp2){
        temp1=temp1->next;
        temp2=temp2->next;
    }
    return temp1->data;

}
