//QUEUE IMPLEMENTATION BY LINKEDLIST.
#include <iostream>
using namespace std;
struct node{
   int data;
   node* link;
};
class Queue{
   private:
    node* front,*rear;
   public:
   Queue(){
     front=NULL;
     rear=NULL;
   }
   bool isempty(){
      if(front==NULL){
         return true;
      } else{
         return false;
      }
   }
   void enqueue(int val){
      node* newer=new node;
      newer->data=val;
      newer->link=NULL;
     if(front==NULL){
      front=newer;
     } else{
      rear->link=newer;
     }
      rear=newer;
   }
   void display(){
      node* temp=front;
      while(temp!=NULL){
         cout<<temp->data<<"\t";
         temp=temp->link;
      }
   }
   int dequeue(){
      node* temp=front;
      int out=temp->data;
      front=front->link;
      if(front==NULL){
         rear=NULL;
      }
      delete temp;
      return out;
   }
};
int main(){
 Queue q;
 q.enqueue(5);
 q.enqueue(10);
 q.enqueue(15);
 q.display();
 cout<<endl;
 cout<<q.dequeue()<<" DELETED"<<endl;
  q.display();
   return 0;

}
