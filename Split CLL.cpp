void splitCLL(Node* head, Node** head1, Node** head2){
  if(head==NULL){return;}
  Node* s_temp=head, *f_temp=head;
  while(f_temp->next != head && f_temp->next->next != head){
    s_temp=s_temp->next;
    f_temp=f_temp->next->next;
  }
  if(f_temp->next->next == head){f_temp=f_temp->next;}

  f_temp->next=s_temp->next;
  s_temp->next=head;
  *head1=head;
  *head2=f_temp->next;
}
