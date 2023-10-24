#include <iostream>
using namespace std;
const int MAX=7;
class OrderArray{
    private:
    int arr[MAX]={1,2,3,4,5};
    int count;
    public:
    OrderArray(){
        count=MAX;
    }
    int size(){
        return count;
    }
       

     int search(int sval){
     int lower=0;
     int upper=count-1;
     int loc;
     while(true){
        loc=(lower+upper)/2;
        if (arr[loc]==sval)
        return loc;
        else if(lower>upper)
        return count;
        else {
            if(arr[loc]<sval)
        lower=loc+1;
        else 
        upper=loc-1;
        }
     }
   }
};

int main(){
    OrderArray oa;

       if(oa.search(63)!=oa.size())
        cout << "SEARCH SUCCESSFUL! NUMBER FOUND"<<endl;
        else
            cout<<"SEARCH UNSUCCESSFUL! NUMBER NOT FOUND"; 
   return 0;
}
