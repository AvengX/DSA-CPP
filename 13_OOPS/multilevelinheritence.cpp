#include <bits/stdc++.h>
using namespace std;
class fruit{
    public:
    string name;
};
class mango:public fruit{
    public:
    int weight;
};
class alfanzo:public mango{
    public:
    int sugarlevel;
};

int main() {
    alfanzo a;
    cout<<a.name<<" "<<a.weight<<" "<<a.sugarlevel<<endl;

    

    return 0;
}