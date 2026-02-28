#include <bits/stdc++.h>
using namespace std;

int main() {

    class animal{
        private:
        int age;
        int weight;
        public:
        void eat(){
            cout<<"Eating"<<endl;
        }
        int getage(){
            return this->age;
        }
        void setage(int age){
            this->age=age;
        }
    }

    return 0;
}