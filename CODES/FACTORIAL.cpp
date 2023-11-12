//FACTORIAL
#include <iostream>
using namespace std;
int factorial(int);

int main(){
  int n;
  cout<<"Enter any number"<<endl;
  cin>>n;
  cout<<"Factorial of "<<n<<" is "<<factorial(n)<<endl;
   return 0;
}
 int factorial(int no){
   if(no==0){
     return 1;
   } else{
      return no*factorial(no-1);
   }
  }
