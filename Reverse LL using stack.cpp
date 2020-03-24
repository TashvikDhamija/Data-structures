void reverseLL(Node* top){
	if(top==NULL){return;}
  stack <Node*> s;
  Node* temp=top;
  while(temp != NULL){
    s.push(temp);
    temp=temp->next;
  }
  temp=s.top();
  top=temp;
  s.pop();
  while(s.empty() != true){
    temp->next=s.top();
    s.pop();
    temp=temp->next;
  }
	temp->next=NULL;

}
