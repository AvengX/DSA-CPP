#include <bits/stdc++.h>
using namespace std;
class Animal{
    //properties
    private:
    int weight;
    public:
    int age;
    string name;
    //default constructor
    Animal(){
        this->weight=0;
        this->age=0;
        this->name="";
        cout<<"Construction called"<<endl;
    }
    //parametarized constructor
    Animal(int age){
        this->age=age;
        cout<<"Paremetarized Constructor"<<endl;

    }
    //copy constructor
    Animal(Animal& obj){
        this->age=obj.age;
        this->weight=obj.weight;
        this->name=obj.name;
        cout<<"I am inside copy constructor"<<endl;
    }

    //behaviour
    void eat(){
cout<<"Eating"<<endl;
    }
    void sleep(){
cout<<"Sleeping"<<endl;
    }
    //private are always called by get set
 int getweight(){
    return weight;
 }   
 void setweight(int weight){
    this->weight=weight;                                       // weight=w;
 }
 void print(){
    cout<<this->age<<" "<<this->weight<<" "<<this->name<<endl; 
 }
 //destructor
 ~Animal(){
    cout<<"I am inside destructor"<<endl;
 }
};
int main() {
Animal Raju;
Raju.age=19;
Raju.name="Kaju";
cout<<"Age of raju is :"<<Raju.age<<endl;
cout<<"Name of raju is :"<<Raju.name<<endl;
    
// Raju.eat();
// Raju.sleep();
// Raju.setweight(101                                                                                                                                                                                                                                                      );
// cout<<"Weight "<<Raju.getweight ()<<endl;   
// Animal*don=new Animal;
// (*don).age=15; //don->age=15;
// (*don).name="hel"; //don->name="hel"
// don->eat();
// don->sleep();
// Animal a;
// Animal*b=new Animal(100);
// //object copy
// Animal c=a;
// Animal animal1(c);
Animal a;
a.age=20;
a.setweight(101);
a.name="BABAB";
Animal b=a;
a.print();
b.print();
a.name[0]='G';
a.print();
Animal l;
l.age=5;

    return 0;
}