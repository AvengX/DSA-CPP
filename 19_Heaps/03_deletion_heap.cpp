#include <bits/stdc++.h>
using namespace std;

class Heap{
    public:
    int arr[101];
    int size;

    Heap(){
        size=0;
    }

    void insert(int value){
        size=size+1;
        int index=size;
        arr[index]=value;

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

    int deleteRoot(){
        int ans=arr[1];
        arr[1]=arr[size];
        size--;
        int index=1;
        while(index<=size){
            int left=2*index;
            int right=2*index+1;
            int largest=index;
            if(left<=size && arr[largest]<arr[left]){
                largest=left;
            }
            if(right<=size && arr[largest]<arr[right]){
                largest=right;
            }

            if(largest==index){
                 break;
            }else{
                swap(arr[index],arr[largest]);
                index=largest;
            }
        }
        return ans;
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
    cout << "Deleted: " << h.deleteRoot() << endl;
    cout << "Printing the heap: ";
    for(int i = 1; i <= h.size; i++){   
        cout << h.arr[i] << " ";
    }
    cout<<endl;
    return 0;
}

/*
Complexity Analysis:
1. Single Insertion (insert):
   - Time Complexity: O(log n) in the worst case, as the element bubbles up to the root.
   - Space Complexity: O(1) auxiliary space (iterative approach).

2. Root Deletion (deleteRoot):
   - Time Complexity: O(log n) in the worst case, as the element placed at the root sinks down to a leaf.
   - Space Complexity: O(1) auxiliary space (iterative approach).

3. Overall Program:
   - Total Time Complexity: O(n log n) for inserting n elements + O(log n) for deletion. Dominant term is O(n log n).
   - Total Space Complexity: O(1) constant space, since the static array size is fixed at 101.
*/