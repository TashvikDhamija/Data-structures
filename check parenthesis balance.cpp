bool arePair(char open,char close){
  if(open=='(' && close == ')'){return true;}
  else if(open=='[' && close == ']'){return true;}
  else if(open=='{' && close == '}'){return true;}
  return false;
}

bool checkParenthesisBalance(string str){
  int n = str.length();
  stack <char> s;
  for(int i=0;i<n;i++){
    if (str[i]=='('||str[i]=='{'||str[i]=='['){
      s.push(str[i]);
    }
    else if(str[i]==')'||str[i]=='}'||str[i]==']'){
      if(s.empty()||!arePair(s.top(),str[i])){return false;}
      else{s.pop();}
    }
  }
  return s.empty();
}
