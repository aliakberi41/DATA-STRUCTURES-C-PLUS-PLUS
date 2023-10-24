#include <iostream>
using namespace std;
const int MAX=7;
class OrderArray{
    private:
    int arr[MAX];
    int count;
    public:
    OrderArray(){
        count=0;
    }
    int size(){
        return count;
    }
        void insertion(int val){
    int i,j;
    for(i=0;i<count;i++){
        if(arr[i]>val)
        break;
    }
    for(j=count;j>i;j--){
        arr[j]=arr[j-1]; 
    }
     arr[i]=val;
        count++;
    }
    int operator[](int index) {
        if (index >= 0 && index < count) {
            return arr[index];
        } else {
            return -1;
        }
    }
};

int main(){
    OrderArray oa;
    
    oa.insertion(3);
     oa.insertion(4);
      oa.insertion(2);

        for (int i = 0; i < oa.size(); i++) {
        cout << oa[i] << " ";
    }
    cout << endl;
     
   return 0;
}
