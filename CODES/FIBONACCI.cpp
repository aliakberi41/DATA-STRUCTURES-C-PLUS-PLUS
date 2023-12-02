// FIBONACCI.
#include <iostream>
using namespace std;
int fibo(int);
int main(){
 int i,no=10;
 for(i=1;i<=no;i++){
cout<<fibo(i)<<"\t";
 }
 cout<<endl;
   return 0;
}
int fibo(int n){
  if(n==1){
   return 0;
  } else if(n==2){
    return 1;
  } 
  else{
   return fibo(n-1)+fibo(n-2);
  }
}

 
 
