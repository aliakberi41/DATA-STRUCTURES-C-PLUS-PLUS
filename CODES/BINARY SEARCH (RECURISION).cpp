//BINARY SEARCH (RECURISION)
#include <iostream>
using namespace std;
int search(int arr[], int lower, int upper, int val);

int main(){
  const int MAX=10;
  int arr[MAX]={22,51,65,74,77,82,84,87,89,97};
 int r=search(arr,0,MAX-1,65);
 if(r!=-1){
  cout<<"Number found at index "<<r<<endl;
 } else{
  cout<<"Number not found"<<endl;
 }

   return 0;
}
 int search(int arr[],int lower,int upper,int val){
  int mid=(lower+upper)/2;
     if(lower>upper){
      return -1;
     }
      else if(arr[mid]==val){
        return mid;
     } 
     else if(arr[mid]<val){
        return search(arr,mid+1,upper,val);
      } 
      else{
        return search(arr,lower,mid-1,val);
      }
     }
 
 
