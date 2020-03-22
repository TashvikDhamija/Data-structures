
class Node{
public:
	int data;
	Node* next;
  Node* prev;
};

Node* getNewNode(int x){
  Node* newNode = new Node();
  newNode->data = x;
  newNode->prev = NULL;
  newNode->next = NULL;
  return newNode;
}

void insertAtHead(Node** head,int x){
  Node* newNode = getNewNode(x);
  if(*head == NULL){
    *head=newNode;
    return;
  }

  (*head)->prev=newNode;
  newNode->next=*head;
  *head=newNode;
  return;

}

void insertAtTail(Node** head,int x){
  Node* newNode = getNewNode(x);
  if(*head == NULL){
    *head=newNode;
    return;
  }
  Node* last= *head;
  while(last->next != NULL){
    last=last->next;
  }
  last->next=newNode;
  newNode->prev=last;
}

void print(Node* head){
  while(head!= NULL){
    cout<<head->data<<" ";
    head=head->next;
  }
  cout<<endl;
}

void printReverse(Node* head){
  Node* last= head;
  while(last->next != NULL){
    last=last->next;
  }
  while(last
    3 != NULL){
    cout<<last->data<<" ";
    last=last->prev;
  }
  cout<<endl;
}


