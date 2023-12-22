//PRIORITY QUEUE IMPLEMENTATION BY LINKEDLIST.
#include <iostream>
using namespace std;
struct node{
   int priority;
   int data;
   node* link;
};
class PriorityQueue{
   private:
    node *front;
   public:
   PriorityQueue(){
     front=NULL;
   }
   bool isempty(){
      if(front==NULL){
         return true;
      } else{
         return false;
      }
   }
   void enqueue(int val,int pri){
      node* newer=new node;
      newer->data=val;
      newer->priority=pri;
      if(front==NULL || pri<=front->priority){
         newer->link=front;
        front=newer;
      } else{
       node* pred=front;
       while(pred->link != NULL && pred->link->priority<=pri){
         pred=pred->link;
       }
         newer->link=pred->link;
         pred->link=newer;
      }
   
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
     
      delete temp;
      return out;
   }
};
int main(){
 PriorityQueue pq;
 pq.enqueue(5,6);
 pq.enqueue(7,2);
 pq.enqueue(11,10);
 pq.display();
 cout<<endl;
 cout<<pq.dequeue()<<" DELETED"<<endl;
  pq.display();
   return 0;
}