//nnumber of arrangements possible where 2 members are always next to each other

//recursive approch

#include <bits/stdc++.h>
using namespace std;
long long factorial(int n){
    if(n==0 || n==1) return 1;
    return n*factorial(n-1);
}
int main() {
    int n;
    cout<<"Enter the number of members :"
    cin>>n;
    long long result=2*factorial(n-1);
    cout<<result;
    return 0;
}


//Iterative approch

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cout<<"Enter the number of members :";
//     cin>>n;
//     long long fact=1;
//     for(int i=1;i<=n-1;i++){
//         fact*=i;
//     }
//     long long result=2*fact;
//     cout<<"Possible ways :"<<result;
//     return 0;
// }