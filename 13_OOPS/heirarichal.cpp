#include <bits/stdc++.h>
using namespace std;
class car{
    public:
    int age;;
    int weight;
    string name;
    void speedup(){
        cout<<"Speeding Up"<<endl;;
    }
};
class honda:public car{

};
class maruti:public car{

};

int main() {
honda h;
h.speedup();
maruti m;
m.speedup();
    

    return 0;
}