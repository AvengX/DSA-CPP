// FW=fourWheeler and TW=twoWheeler id v=200 and w=540 o/p=TW=70 and FW=130

#include<bits/stdc++.h>
using namespace std;
int main(){
    int v;
    cout<<"Total number of both two and 4 wheeler :";
    cin>>v;
    int w;
    cout<<"Total number of vehicles :";
    cin>>w;
    if(w<2 || w%2!=0 || v>=w){
    cout<<"Invalid Output"<<endl;
    return 0;
    }
    int FW=(4*v-w)/2; //FW=(w-2*v)/2
    int TW=v-FW;
    if(FW<0 ||TW<0) cout<<"Invalid Output";
    cout<<"FW ="<<FW<<" "<<"TW ="<<TW;
    return 0;
}