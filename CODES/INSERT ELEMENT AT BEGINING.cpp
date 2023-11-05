//INSERT ELEMENT AT BEGINING.
#include <iostream>
using namespace std;

int main(){
   int arr[15];
   int n,position,value;
   cout<<"Enter the length of the array"<<endl;
   cin>>n;
   cout<<"Current Array is "<<endl;
   for(int i=0;i<n;i++){
    cin>>arr[i];
   } 
   cout<<"Enter the value you want to insert in the array:"<<endl;
   cin>>value;
  
   for(int i=n-1;i>=0;i--){
    arr[i+1]=arr[i];
   }
     arr[0]=value;
    n++;
   cout<<"Final Array is:"<<endl;
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   } 
   return 0;
}
