#define MAX 1000

class Stack{
private:
  int top;
  int arr[MAX];
public:
  Stack(){top=-1;}
  void push(int x);
  int pop();
  int peek();
  bool isEmpty();
};

void Stack::push(int x){
  if(top==MAX-1){
    cout<<"Stack Overflow"<<endl;
  }
  arr[++top]=x;
}
int Stack::pop(){
  if(top<0){
    cout<<"Stack Empty"<<endl;
    return 0;
  }
  return arr[top--];
}
int Stack::peek(){
  if(top<0){
    cout<<"Stack Empty"<<endl;
    return 0;
  }
  return arr[top];
}
bool Stack::isEmpty(){
  if(top==-1){
    return true;
  }
  else{
    return false;
  }
}
