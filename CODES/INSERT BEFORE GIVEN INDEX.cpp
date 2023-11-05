//INSERT ELEMENT BEFORE GIVEN INDEX.
#include <iostream>
using namespace std;

int main(){
   int arr[15];
   int n,elem,index;
   cout<<"Enter the length of the array"<<endl;
   cin>>n;
   cout<<"Current Array is "<<endl;
   for(int i=0;i<n;i++){
    cin>>arr[i];
   } 
   cout<<"Enter an element to insert in the array: "<<endl;
   cin>>elem;
    cout<<"Enter the index of element of inserted array: "<<endl;
   cin>>index;

if(index==0){
   cout<<"INSERTION FAILED!!! INDEX UNDERFLOW"<<endl;
} else{
  for (int i=n;i>index-1;i--) {
       arr[i] = arr[i-1];
   }
  	  arr[index-1] = elem;
   n++;
}

  cout<<"New Array is: "<<endl;
  for(int i=0;i<n;i++){
    cout<<arr[i];
   } 
   return 0;
}
