Node* moveLastNode(Node* head){
	Node* last=head, *seclast=NULL;
	while(last->next != NULL){
		seclast=last;
		last=last->next;
	}
  seclast->next=NULL;
	last->next=head;

	return last;
}
