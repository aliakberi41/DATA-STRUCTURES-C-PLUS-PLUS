// QUICK SORT.
#include <iostream>
using namespace std;
const int MAX=20;
class QuickSort{
  private:
  int arr[MAX];
  public:
  QuickSort(){
    arr[0]=3;
    arr[1]=8;
    arr[2]=2;
    arr[3]=56;
    arr[4]=25;
    arr[5]=39;
    arr[6]=36;
  }
  void display(){
    for(int i=0;i<7;i++){
      cout<<arr[i]<<"\t";
      cout<<endl;
    }
  }
  void qsort(int left,int right){
    if(right-left<=0)
    return;
    int pivot=arr[right];
    int partition=partitionit(left,right,pivot);
    qsort(left,partition-1);
    qsort(partition+1,right);
  }
  int partitionit(int left,int right,int pivot){
    int lb=left-1;
    int ub=right;
    while(true){
      while(arr[++lb]<pivot);
      while(ub>0 && arr[--ub]>pivot);
      if(lb>=ub)
      break;
      else{
        swap(lb,ub);
      }
    }
    swap(lb,right);
    return lb;
  }
  void swap(int no1,int no2){
    int temp=arr[no1];
    arr[no1]=arr[no2];
    arr[no2]=temp;
  }
};

int main(){
  QuickSort qs;
  qs.display();
  qs.qsort(0,6);
  cout<<"Sorted array is : "<<endl;
  qs.display();

   return 0;
}

 
 
