//STACK IMPLEMENTATION BY LINKEDLIST.
#include <iostream>
using namespace std;
struct node{
   int data;
   node* link;
};
class Stack{
   private:
   node* top;
   public:
   Stack(){
      top=NULL;
   }
   bool isempty(){
      if(top==NULL){
         return true;
      } else{
         return false;
      }
   }
   void push(int val){
      node* newer=new node;
      newer->data=val;
      newer->link=top;
      top=newer;
   }
   void display(){
      node* current=top;
      while(current!=NULL){
         cout<<current->data<<"\t";
         current=current->link;
      }
   }
   int pop(){
      node* temp=top;
      int out=temp->data;
      top=top->link;
      delete temp;
      return out;
   }
};
int main(){
 Stack stk;
 stk.push(5);
 stk.push(10);
 stk.push(15);
 stk.display();
 cout<<endl;
 cout<<stk.pop()<<" DELETED"<<endl;
  stk.display();
   return 0;
}