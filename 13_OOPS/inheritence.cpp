#include <bits/stdc++.h>
using namespace std;
 class animal{
    public:
        int age;
        int weight;
        void eat(){
            cout<<"Eating"<<endl;
        }
    };
  class dog:public animal{

  };

int main() {
dog d1;
d1.eat();
return 0;   
    

  
}