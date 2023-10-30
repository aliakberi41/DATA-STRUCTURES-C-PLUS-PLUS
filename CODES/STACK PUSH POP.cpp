#include <iostream>
using namespace std;
const int MAX=5;
class Stack{
private:
int arr[MAX];
int top;
public:
Stack(){
    top=-1;
}
int topStack(){
    return top;
}
bool isempty(){
    if(top==-1)
    return true;
    else 
    return false;
}
void push(int val){
    arr[++top]=val;
}
int pop(){
    int val=arr[top];
    top--;
    return val;
}
void display(){
    for (int i=top; i>=0;i--){
        cout<<arr[i]<<'\t';
        cout<<endl;
    }
}
};

int main(){
    Stack stk;
    int val;
    int choice;
    while(true){
        cout<<endl;
        cout<<"Addition"<<endl;
         cout<<"Deletion"<<endl;
          cout<<"isempty"<<endl;
           cout<<"Display"<<endl;
            cout<<"Exit"<<endl;
            cout<<" Enter your choice ";
            cin>>choice;
            if(choice==1){
                if(stk.topStack()==MAX-1){
                cout<<" Stack Overflow"<<endl;
            } else{
                cout<<" Enter value ";
                cin>>val;
                stk.push(val);
                cout<<val<<" added"<<endl;
            }} else if(choice==2){
          if(stk.isempty()){
            cout<<" Stack underflow"<<endl;
          } else{
            cout<<stk.pop()<<" DELETED"<<endl;
          }
            } else if(choice==3){
                if(stk.isempty()){
                    cout<<" Stack is empty"<<endl;
                } else{
                      cout<<" Stack is not empty"<<endl;
                } 
            } else if(choice==4){
                if(stk.isempty()){
                     cout<<" Stack is empty"<<endl;
                } else{
                    stk.display();
                } 
            }else if(choice==5){
                break;
            }

    }
   
   return 0;
}
