#include <iostream>
#include <math.h>
using namespace std;
const int MAX=20;
class Stack{
    private:
    int items[MAX];
    int top;
    public:
    Stack(){
        top=-1;
    }
    void push(int val){
        if(top==MAX-1){
            cout<<"Overflow"<<endl;
            exit(1);
        } else{
            items[++top]=val;
        }
    }
    int pop(){
          if(top==-1){
            cout<<"Underflow"<<endl;
             exit(1);
          } 
          return items[top--];
    }

      int calculate(int op1,int op2,char opt){
        switch(opt){
            case '+':
            return op1+op2;
            break;
             case '-':
            return op1-op2;
            break;
             case '*':
            return op1*op2;
            break;
             case '/':
            return op1/op2;
            break;
             case '$':
            return pow(double(op1),(op2));
            break;
            default:
            cout<<"Invalid Option"<<endl;
        }
    }
};

int main(){
    Stack stk;
    string postfix;
    int i;
    int op1,op2,r;
    cout<<"Enter postfix expression"<<endl;
    cin>>postfix;
  
    for(i=0;i<postfix.length();i++){
     char symb=postfix[i];
     if(symb>='0'&& symb<='9'){
        stk.push(symb-'0');
     } else{
        op2=stk.pop();
         op1=stk.pop();
         r=stk.calculate(op1,op2,symb);
         stk.push(r);
     }
    }
    cout<<"Value is "<<stk.pop()<<endl;
   
   return 0;
}

///623+-382/+*2$3+
