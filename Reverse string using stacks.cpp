void reverseString(char *arr,int n){
  stack <char> s;
  for(int i = 0; i<n ; i++ ){
    s.push(arr[i]);
  }
  for(int i = 0; i<n ; i++){
    arr[i]= s.top();
    s.pop();
  }
}
