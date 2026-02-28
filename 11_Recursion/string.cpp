#include<iostream>
using namespace std;
bool checkey(string str,int i,int n,char key){
    if(i>=n) return false;
    if(str[i]==key){
        cout<<"Found at :"<<i<<endl;
    }
    bool ans=checkey(str,i+1,n,key);
    return ans;

}
int main(){
    int i=0;
    string str="heymynameisayush";
    int n=str.length();
    char key='y';
    bool ans=checkey(str,i,n,key);
    cout<<"Answer is :"<<ans<<endl;
    return 0;
}