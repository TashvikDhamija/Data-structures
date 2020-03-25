bool isOperator(char str){
  if(str=='+'||str=='-'||str=='*'||str=='/'||str=='^'){return true;}
  return false;
}
bool isOperand(char str){
  if(str >= '0' && str <= '9' ){return true;}
  if(str >= 'a' && str <= 'z' ){return true;}
  if(str >= 'A' && str <= 'Z' ){return true;}
  return false;
}
int operatorWeight(char op){
  int weight = 0;
  switch(op){
    case '+':
    case '-':
      weight=1;
      break;
    case '*':
    case '/':
      weight=2;
      break;
    case '^':
      weight=3;
      break;
  }
  return weight;
}
bool rightAssociative(char x){
  if(x=='^'){return true;}
  return false;
}
bool highPrecedence(char x,char y){
  int op1=operatorWeight(x);
  int op2=operatorWeight(y);
  if(op1>op2){return true;}
  else if(op1==op2){
    if(rightAssociative(x)){return false;}
    return true;
  }
  return false;
}



string infixPostfix(string str){
  stack <char> s;
  string res = "";

  for(unsigned int i=0; i<str.length() ; i++ ){
    if(str[i]==' ' || str[i]== ','){continue;}
    else if(isOperand(str[i])){res=res+" "+str[i];}
    else if(isOperator(str[i])){
      while(!s.empty() && s.top() != '('  && highPrecedence(s.top(),str[i])){
        res=res+" "+s.top();
        s.pop();
      }
      s.push(str[i]);
    }
    else if (str[i]=='('){s.push(str[i]);}
    else if(str[i]==')'){
    	while(!s.empty() && s.top() != '('){
    		res=res+" "+ s.top();
    		s.pop();
    	}
    	s.pop();
    }
  }
  while(!s.empty()){
    res=res+" "+s.top();
    s.pop();
  }
  return res;
}
