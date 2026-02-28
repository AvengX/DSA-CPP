#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>& v,int s,int e,int key){
    if(s>e) return -1;
    int mid=s+(e-s)/2;
    if(v[mid]==key) return mid;
    if(v[mid]<key){
        int ans=binarySearch(v,mid+1,e,key);
        return ans;
    }
    else{
        return binarySearch(v,s,mid-1,key);
    }
}
int main(){
    vector<int> v{10,20,30,40,50,60};
    int target =20;
    int n=v.size();
    int s=0;
    int e=n-1;
    int ans=binarySearch(v,s,e,target);
    cout<<"Answer is:"<<ans<<endl;
}