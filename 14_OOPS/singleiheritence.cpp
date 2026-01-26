#include <bits/stdc++.h>
using namespace std;
class car{
    string name;
    int weight;
    int age;
public:
    void speedup(){
        cout<<"Speding up"<<endl;
    }
    void breakmarro(){
        cout<<"break mardi"<<endl;
    }
};
class honda:public car{

};

int main() {

    honda ayushwala;
    ayushwala.speedup();
    ayushwala.breakmarro();

    return 0;
}