#include <iostream>
#include <string>
using namespace std;
const int MAX=20;
class Stack{
    private:
    char items[MAX];
    int top;
    public:
    Stack(){
        top=-1;
    }
    bool isempty(){
        if(top==-1){
            return true;
        } else{
            return false;
        }
    }
    char Stacktop(){
        return items[top];
    }
    void push(char ch){
        if(top==MAX-1){
            cout<<"Overflow"<<endl;
            exit(1);
        } else{
            items[++top]=ch;
        }
    }
    char pop(){
          if(top==-1){
            cout<<"Underflow"<<endl;
             exit(1);
          } 
          return items[top--];
    }
    bool precedence(char top,char symb)
    {
        if(top=='(' || symb=='(')
        return false;
        if(symb==')')
        return true;
         if(symb=='$')
         return false;
        if(top =='$')
         return true;
         if((symb=='*' || symb=='/') && (top=='*' || top=='/'))
         return true;
          if((symb=='+' || symb=='-') && (top=='+' || top=='-'))
         return true;
         else{
            return false;
         }
    }
};
int main(){
    Stack stk;
    string infix,postfix;
    int i;
    cout<<"Enter infix expression"<<endl;
    cin>>infix;

    for(i=0;i<infix.length();i++){
        char symb=infix[i];
        if(symb>='A' && symb<='Z')
        postfix.append(1,symb);
        else{
            while(!stk.isempty() && stk.precedence(stk.Stacktop(),symb)){
                char topsymb=stk.pop();
                postfix.append(1,topsymb);
            }   if(stk.isempty() || symb!=')')
            stk.push(symb);
            else{
                stk.pop();
            }
        }
    }
    while (!stk.isempty()){
        char topsymb=stk.pop();
        postfix.append(1,topsymb);
    }
    cout<<"Postfix = "<<postfix<<endl;
}
