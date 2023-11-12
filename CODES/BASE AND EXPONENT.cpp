//BASE AND EXPONENT
#include <iostream>
using namespace std;
int power(int,int);

int main(){
  int base,exponent;
  cout<<"Enter base"<<endl;
  cin>>base;
   cout<<"Enter exponent"<<endl;
  cin>>exponent;
  cout<<"Result is "<<power(base,exponent)<<endl;
   return 0;
}
 int power(int b,int ex){
   if(ex==0){
     return 1;
   } else{
      return b*power(b,ex-1);
   }
  }
