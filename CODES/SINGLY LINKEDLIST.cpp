//SINGLY LINKEDLIST.
#include <iostream>
using namespace std;
struct node{
   int data;
   node* link;
};
class LinkedList{
   private:
   node* head;
   public:
   LinkedList(){
      head=NULL;
   }
   bool isempty(){
      if(head==NULL){
         return true;
      } else{
         return false;
      }
   }
   void firstadd(int val){
      node* newer= new node;
      newer->data=val;
      newer->link=NULL;
      head=newer;
   }
   void addlast(int val){
      node* newer= new node;
      newer->data=val;
      newer->link=NULL;
      if(head==NULL){
         head=newer;
      } else{
         node* temp=head;
         while(temp->link!=NULL){
            temp=temp->link;
         }
         temp->link=newer;
      }
   }
   void addafter(int val,int sval){
      node* temp=head;
      while(temp->link!=NULL && temp->data!=sval){
         temp=temp->link;
      }
      if(temp->data==sval){
         node* newer=new node;
         newer->data=val;
         newer->link=temp->link;
         temp->link=newer;
         cout<<val<<" added after "<< sval<<endl;
      } else{
         cout<<val<<" not found" <<endl;
      }
   }
 
   void display(){
      node* current=head;
      while(current!=NULL){
         cout<<current->data<<"\t";
         current=current->link;
      }
   }
  
};
int main(){
 LinkedList ls;
 ls.firstadd(5);
 ls.addlast(10);
 ls.addafter(15,5);
 cout<<"Linkedlist is " ;
 ls.display();
   return 0;
}
