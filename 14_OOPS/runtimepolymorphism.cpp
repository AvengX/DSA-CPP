#include <bits/stdc++.h>
using namespace std;
class animal{
    public:
    void speak(){
        cout<<"Speaking"<<endl;;
    }
};
class dog:public animal{
    public:
    //override
    void speak(){
    cout<<"barking"<<endl;
    }
};
int main() {
// dog a;
// a.speak();
//upcasting
animal*a=new dog();
a->speak();
dog*b=(dog*)new animal();
b->speak();
    return 0;
}