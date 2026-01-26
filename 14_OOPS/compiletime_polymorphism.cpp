#include <bits/stdc++.h>
using namespace std;
class maths{
    public:
    int sum(int a,int b){
        cout<<"i am first"<<endl;
        return a+b;
    }
    int sum(int a,int b,int c){
        cout<<"i am second"<<endl;
        return a+b+c;
    }
    int sum(int a,float b){
        cout<<"i am third"<<endl;
        return a+b;
    }
};
int main() {

    maths obj;
    cout<<obj.sum(2,5.19f);

    return 0;
}