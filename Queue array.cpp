class Queue{
private:
  static const int n = 10000;
  int arr[n];
  int head;
  int tail;
public:
  Queue(){
    head=-1;
    tail=-1;
  }
  void Enqueue(int x);
  int Dequeue();
  bool isEmpty();
  bool isFull();
  void printQueue();
};

bool Queue::isEmpty(){
  return (head==-1 && tail==-1);
}
bool Queue::isFull(){
  return (head+1)%n==tail;
}
int Queue::Dequeue(){
  if(tail==-1){
    cout<<"Error: No elements to delete"<<endl;
  }
  if((tail+1)%n==head){
    tail=head= -1;
  }
  return arr[tail++];
}
void Queue::Enqueue(int x){
  if(isFull()){
    cout<<"Error: No space"<<endl;
  }
  if(isEmpty()){
    tail=head=0;
  }
  else{
    head=(head+1)%n;
  }
  arr[head]=x;
}
void Queue::printQueue(){
  for(int i=0;i<(n+head-tail)%n+1;i++){
    cout<<arr[(tail+i)%n]<<" ";
  }
  cout<<endl;
}
