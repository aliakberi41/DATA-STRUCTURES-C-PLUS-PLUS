//CIRCULAR QUEUE IMPLEMENTATION BY LINKEDLIST.
#include <iostream>
using namespace std;
struct node{
   int data;
   node* link;
};
class CircularQueue{
   private:
    node *rear;
   public:
   CircularQueue(){
     rear=NULL;
   }
   bool isempty(){
      if(rear==NULL){
         return true;
      } else{
         return false;
      }
   }
   void enqueue(int val){
      node* newer=new node;
      newer->data=val;
      if(rear==NULL){
         rear=newer;
      } else{
         newer->link=rear->link;
      }
    rear->link=newer;
    rear=newer;
   }
   void display(){
      node* temp=rear->link;
      while(temp!=rear){
         cout<<temp->data<<"\t";
         temp=temp->link;
      }
       cout<<temp->data<<"\t";
   }
   int dequeue(){
      node* temp=rear->link;
      int out=temp->data;
      if(rear==rear->link){
         rear=NULL;
      } else{
         rear->link=temp->link;
      }
      delete temp;
      return out;
   }
};
int main(){
 CircularQueue cq;
 cq.enqueue(5);
 cq.enqueue(10);
 cq.enqueue(15);
 cq.display();
 cout<<endl;
 cout<<cq.dequeue()<<" DELETED"<<endl;
  cq.display();
   return 0;
}
