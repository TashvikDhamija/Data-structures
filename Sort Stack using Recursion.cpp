void sortedInsert(stack <int> *s,int x){
  int temp;
  if(s->empty()||s->top()<x){
    s->push(x);
  }
  else{
    temp=s->top();
    s->pop();
    sortedInsert(s,x);
    s->push(temp);
  }
}
void sort(stack <int> *s){
  int temp;
  if(!s->empty()){
    temp=s->top();
    s->pop();
    sort(s);
    sortedInsert(s,temp);
  }
}
