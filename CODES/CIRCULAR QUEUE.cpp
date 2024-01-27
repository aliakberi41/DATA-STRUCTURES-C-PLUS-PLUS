//CIRCULAR QUEUE PROGRAM.
#include <iostream>
using namespace std;
const int MAX=5;
class Circularqueue{
private:
int items[MAX];
int front,rear;
public:
Circularqueue(){
    front=rear=-1;
}
bool isempty(){
    if(front==-1){
        return true;
    } else{
        return false;
    }
}
void enqueue(int val){
  if(isempty()){
    front=rear=0;
  } else{
    rear=(rear+1)%MAX;
}
    items[rear]=val;
}
int dequeue(){
int out=items[front];
if(front==rear){
    front=rear=-1;
} else{
    front=(front+1)%MAX;
}
return out;
}
void display(){
	int i=front;
  do{
        cout<<items[i]<<'\t';
        i=(i+1)%MAX;
}
while(i!=(rear+1)%MAX);
}
bool isfull(){
  if(front==(rear+1)%MAX){
    return true;
  } else {
    return false;
  }
}
};

int main(){
    Circularqueue q;
    q.enqueue(5);
    q.enqueue(2);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(1);
  
    
    q.dequeue();
    q.dequeue();
  
    q.enqueue(3);
    q.enqueue(4);
    q.display();
   return 0;
}