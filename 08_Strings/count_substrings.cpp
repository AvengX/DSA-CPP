//count the number of substrngs including all 1

#include<bits/stdc++.h>
using namespace std;
int countOnesSubstrings(string& str){
    int ones=0;
    int count=0;
    int n=str.size();
    for(int i=0;i<n;i++){
        if(str[i]=='1'){
            ones++;
            count+=ones;
        }else{
            ones=0;
        }
    }
    return count;
}
int main(){
    string s="0110111";
    cout<<countOnesSubstrings(s);
    return 0;
}

