#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<string,int>mp;
    //for insertion in map
    //method-1
    pair<string,int>p=make_pair("Scorpio",9);
    mp.insert(p);

    //method-2
    pair<string,int>p2("Alto",2);
    mp.insert(p2);

    //method-3
    mp["Fortuner"]=10;

    //access
    cout<<mp.at("Alto")<<endl;
    cout<<mp.at("Scorpio")<<endl;
    cout<<mp["Fortuner"]<<endl;

    //search
    cout<<mp.count("Scorpio")<<endl;
    if(mp.find("Fortuner")!=mp.end()){
        cout<<"Fortuner found "<<endl;
    }else{
        cout<<"Fortuner not found"<<endl;
    }

    cout<<mp.size()<<endl;
    cout<<mp["Hummer"]<<endl;
    cout<<mp.size()<<endl;

    for(auto i:mp){
        cout<<i.first<<"->"<<i.second<<endl;
    }
    return 0;
}