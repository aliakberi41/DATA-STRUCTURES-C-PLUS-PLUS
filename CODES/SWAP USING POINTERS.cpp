//SWAPING VARIABLES USING POINTERS.
#include <iostream>
using namespace std;
void swap(int *,int *);
int main(){
   int var1=5, var2=10;
   cout<<"Ist Variable is: "<<var1<<endl;
   cout<<"2nd Variable is: "<<var2<<endl;
   swap(&var1,&var2);
   cout<<endl;
    cout<<"Ist Variable is: "<<var1<<endl;
   cout<<"2nd Variable is: "<<var2<<endl;
   return 0;
}
void swap(int *p1,int *p2){
   int temp=*p1;
   *p1=*p2;
   *p2=temp;
}
