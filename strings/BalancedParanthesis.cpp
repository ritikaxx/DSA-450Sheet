char temp;
       stack<char>s;
       for(int i=0;i<x.length();i++)
       {
           if(x[i]=='(' ||x[i]=='{' ||x[i]=='[')
           {
               s.push(x[i]);
               continue;
           }
           if(s.empty()) return false;
           switch(x[i])
           {
               case ')':
               temp=s.top();
               s.pop();
               if(temp=='{'||temp=='[')
               return false;
               break;
               
               case '}':
               temp=s.top();
               s.pop();
               if(temp=='('||temp=='[')
               return false;
               break;
               
               case ']':
               temp=s.top();
               s.pop();
               if(temp=='{'||temp=='(')
               return false;
               break;
           }
       }
       return s.empty();