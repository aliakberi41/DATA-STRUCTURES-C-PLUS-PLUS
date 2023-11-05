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
    cout<<"Enter the index in which value is to be inserted:"<<endl;
   cin>>position;
    if (position< 0 || position>=n) {
        cout<<"Invalid index. The index must be between 0 and " << n - 1 << endl;
        return 1; 
    }
   cout<<"Enter the value you want to insert in the array:"<<endl;
   cin>>value;
  
   for(int i=n;i<position;i--){
    arr[i+1]=arr[i];
   }
   arr[position]=value;
   n++;
   cout<<"Final Array is:"<<endl;
    for(int i=0;i<n-1;i++){
    cout<<arr[i]<<" ";
   } 
   return 0;
}
