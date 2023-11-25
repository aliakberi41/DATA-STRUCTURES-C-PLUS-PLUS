//MERGE SORT.
#include <iostream>
#include <string>
using namespace std;
const int MAX=8;
class Merge{
    private:
    int arr[MAX];
    public:
     Merge(){
    arr[0]=6;
    arr[1]=7;
    arr[2]=2;
    arr[3]=5;
    arr[4]=-1;
    arr[5]=3;
    arr[6]=12;
    arr[7]=8;
  }

  void display(){
    for(int i=0;i<MAX;i++){
      cout<<arr[i]<<"\t";
    }
      cout<<endl;
  }

void sorting(){
int aux[MAX];
recms(aux,0,7);
}

void recms(int aux[],int lower,int upper){
    if(lower==upper)
    return;
    int mid=(lower+upper)/2;
    recms(aux,lower,mid);
     recms(aux,mid+1,upper);
     merge(aux,lower,mid+1,upper);
}

void merge(int aux[],int low,int high,int ub){
    int j=0;
    int lb=low;
    int mid=high-1;
    int no=ub-lb+1;
while(low<=mid && high<=ub){
    if(arr[low]<arr[high])
    aux[j++]=arr[low++];
    else
     aux[j++]=arr[high++];
}
     while(low<=mid)
        aux[j++]=arr[low++];
         while(high<=ub)
        aux[j++]=arr[high++];
    for(j=0;j<no;j++)
    arr[lb+j]=aux[j];
}


};

int main() {
    Merge ms;
    cout<<"Given array is "<<endl;
    ms.display();
   ms.sorting();
cout<<"Sorted Array is "<<endl;
  ms.display();
    return 0;
}
