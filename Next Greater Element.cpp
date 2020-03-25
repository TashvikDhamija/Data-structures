void nge(int arr[],int n){
  stack <int> s;
  for(int i=0;i<n;i++){
    while(!s.empty()&&s.top()<arr[i]){
      cout<<s.top()<<"-->"<<arr[i]<<endl;
      s.pop();
    }
    s.push(arr[i]);
  }
  while (s.empty() == false) {
	   cout << s.top() << " --> " << -1 << endl;
	   s.pop();
  }
}
