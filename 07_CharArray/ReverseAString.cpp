#include<iostream>
#include<cstring>
using namespace std;
int reverseCharArray(char name[]){
    int i=0;
    int n=strlen(name);
    int j=n-1;
    while(i<j){
        swap(name[i],name[j]);
        i++;
        j--;
    }
    return 0;
}

int main(){
    char name[100];
    cout<<"Enter a string:";
    cin>>name;
    cout<<"Initially:"<<name<<endl;
    reverseCharArray(name);
    cout<<"After Reversal:"<<name<<endl;
    return 0;
}