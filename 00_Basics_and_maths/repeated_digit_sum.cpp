#include <bits/stdc++.h>
using namespace std;
int digitSum(int n){
    int sum=0;
    while(n>0){
      sum+=n%10;
      n/=10;
    }
    return sum;
}

int main() {
    int n;
    cout<<"Enter the number :";
    cin>>n;
    cout<<"Enter how much time want :";
    int r;
    cin>>r;
    int sum=digitSum(n);
    int total=sum*r;
    while(total>=10){
        total=digitSum(total);
    }
    cout<<total;
    return 0;
}

// n=99
// r=3

// 9+9=18
// 3*18=54
// 5+4=9->ans