#include <bits/stdc++.h>
using namespace std;
class A{
    public:
    int maths;
};
class B{
    public:
    int chem;
};
class C:public A,public B{
    public:
    int bio;
};
int main() {
C obj;
cout<<obj.maths<<" "<<obj.chem<<" "<<obj.bio<<endl;
    return 0;
}