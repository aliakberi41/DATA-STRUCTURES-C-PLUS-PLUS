//SIMPLE QUEUE PROGRAM.
#include <iostream>
using namespace std;
const int MAX=5;
class queue{
private:
int items[MAX];
int front,rear;
public:
queue(){
    front=rear=-1;
}
bool isempty(){
    if(front==-1){
        return true;
    } else{
        return false;
    }
}
bool isfull(){
    if(rear==MAX-1){
        return true;
    } else{
        return false;
    }
}
void display(){
    int i;
    for(i=front;i<=rear;i++){
        cout<<items[i]<<"\t";
        cout<<endl;
    }
}
void enqueue(int val){
    items[++rear]=val;
    if(front==-1){
        front=0;
    }
}
int dequeue(){
int out=items[front];
if(front==rear){
    front=rear=-1;
} else{
    front++;
}
return out;
}
};

int main(){
    queue q;
    q.enqueue(2);
    q.enqueue(22);
    q.enqueue(12);
    q.enqueue(26);
    q.enqueue(29);
    q.display();

    cout<<endl;
    
    q.dequeue();
    q.dequeue();
    q.display();
   return 0;
}
