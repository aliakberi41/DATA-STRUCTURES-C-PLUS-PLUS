// TOWER OF HANOI.
#include <iostream>
using namespace std;
void tower(int,char,char,char);
int main(){
 int no;
 cout<<"Enter number of discs: "<<endl;
 cin>>no;
 tower(no,'A','B','C');
   return 0;
}
void tower(int n,char src,char aux,char des){
  if(n==1){
   tower(n-1,src,des,aux);
  tower(1,src,aux,des);
   tower(n-1,aux,src,des);
  } else{
    cout<<" Move Disc from "<<src<<" to "<<des<<endl;
  }
}

 
 
