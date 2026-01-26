// Solution going from left to right
// #include<iostream>
// using namespace std;
// void lastoccurencefromlefttoright(string&s,char x,int i,int&ans) {
//     if(i>=s.size()){
//         return;
//     }
//     if(s[i]==x){
//         ans=i;
//     }
//     lastoccurencefromlefttoright(s,x,i+1,ans);
// }  
// int main(){
//     string s;
//     cout<<"Enter the String : "<<endl;
//     cin>>s;
//     cout<<"Enter the character :  ";
//     char x;
//     cin>>x;
//     int ans=-1;
//     lastoccurencefromlefttoright(s, x, 0,ans);
//     cout<<ans<<endl;
//     return 0;
// }


//Solition going from right to left
#include<iostream>
using namespace std;
void lastoccurencefromlefttoright(string&s,char x,int i,int&ans) {
    if(i<0){
        return;
    }
    if(ans==i){
        return;
    }
    lastoccurencefromlefttoright(s,x,i-1,ans);
}  
int main(){
    string s;
    cout<<"Enter the String : "<<endl;
    cin>>s;
    cout<<"Enter the character :  ";
    char x;
    cin>>x;
    int ans=-1;
    lastoccurencefromlefttoright(s, x,s.size()-1 ,ans);
    cout<<ans<<endl;
    return 0;
}

