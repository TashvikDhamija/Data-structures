Node* removeDuplicateUnsorted(Node* head){
	Node* temp1 = head, *temp2, *dup;
	while(temp1 != NULL){
    temp2=temp1;
		while(temp2->next != NULL){
			if(temp2->next->data == temp1-> data){
				dup=temp2->next;
				temp2->next=dup->next;
				delete dup;
			}
		else{
			temp2=temp2->next;
		  }
		}
		temp1=temp1->next;
	}
	return head;
}
