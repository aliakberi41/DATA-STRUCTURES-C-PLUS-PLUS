//MAXIMUM MINIMUM
#include <iostream>
using namespace std;

int main(){
   int arr[15];
   int n,max,min;
   cout<<"Enter the length of the array"<<endl;
   cin>>n;
   cout<<"Current Array is "<<endl;
   for(int i=0;i<n;i++){
    cin>>arr[i];
   } 
  max=arr[0];
  min=arr[0];
   for(int i=0;i<n;i++){
  if(arr[i]>max){
   max=arr[i];
  }
  if(arr[i]<min){
   min=arr[i];
  }
   }
   cout<<"Maximun element in the array is: "<<max<<endl;
    cout<<"Minimum element in the array is: "<<min<<endl;
   return 0;
}
