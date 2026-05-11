#include <bits/stdc++.h>
using namespace std;

class Heap{
    public:
    vector<int> arr;   
    int size;

    Heap(){
        size=0;
        arr.push_back(-1);  
    }

    void insert(int value){
        size=size+1;
        arr.push_back(value);  
        int index=size;

        while(index>1){
            int parentIndex=index/2;
            if(arr[index]>arr[parentIndex]){
                swap(arr[index] , arr[parentIndex]);
                index=parentIndex;
            }else{
                break;
            }
        }
    }
};

int main() {
    Heap h;
    h.insert(50);
    h.insert(30);
    h.insert(70);
    h.insert(40);
    h.insert(80);
    h.insert(100);

    cout << "Printing the heap: ";
    for(int i = 1; i <= h.size; i++){   
        cout << h.arr[i] << " ";
    }
    return 0;
}

