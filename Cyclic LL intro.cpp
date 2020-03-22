class Node{
public:
	int data;
	Node* next;
};

void print(Node* first){
  Node* last=first;
  do{
    cout<<last->data<<" ";
    last=last->next;
  }while(last != first);
  cout<<endl;
}

Node* getNewNode(int x){
  Node* newNode = new Node();
  newNode->data = x;
  newNode->next = NULL;
  return newNode;
}

Node* insertAtHead(Node* head, int x){
  Node* newNode = getNewNode(x);
  if(head == NULL){
    Node* newNode = getNewNode(x);
    newNode->next=newNode;
    return newNode;
  }
  else{
    Node* last = head;
    while(last->next != head){
      last=last->next;
    }
    newNode->next=head;
    last->next=newNode;
  }
  return newNode;
}

Node* insertAtEnd(Node* head, int x){
  Node* newNode = getNewNode(x);
  if(head == NULL){
    Node* newNode = getNewNode(x);
    newNode->next=newNode;
    return newNode;
  }
  else{
    Node* last = head;
    while(last->next != head){
      last=last->next;
    }
    newNode->next=head;
    last->next=newNode;
  }
  return head;
}

Node* insertAtPosition(Node* head, int x ,int pos){
  Node* temp=head;
  Node* newNode = getNewNode(x);
  for(int i=0;i<pos-1;i++){
    temp=temp->next;
  }
  newNode->next=temp->next;
  temp->next=newNode;
  return head;
}
