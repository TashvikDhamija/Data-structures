
bool isOperator(char str){
  if(str=='+'||str=='-'||str=='*'||str=='/'){return true;}
  return false;
}

bool isNumber(char str){
  if(str >= '0' && str <= '9' ){return true;}
  return false;
}

int operation(char op, int x1, int x2){
  if(op=='+'){return x1 + x2;}
  else if(op == '-'){return x1-x2;}
  else if(op == '*'){return x1*x2;}
  else if(op == '/'){return x1/x2;}
  return -1;
}

int evalPostfix(string str){
  stack <int> s;
  for( int i =0 ; i < str.length() ; i++ ){
    if(str[i]==' '||str[i]==','){continue;}
    else if(isOperator(str[i])){
      int op2= s.top();
      s.pop();
      int op1 = s.top();
      s.pop();
      s.push(operation(str[i],op1,op2));
    }
    else if (isNumber(str[i])){
      int num = 0;
      while(i<str.length() && isNumber(str[i])){
        num=num*10+(str[i]-'0');
        i++;
      }
      i--;
      s.push(num);
    }
  }
  return s.top();
}
