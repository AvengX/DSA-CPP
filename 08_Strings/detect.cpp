//Given a word if the word is all capital or all small or first letter capital of the word ,return true else return false

#include<iostream>
using namespace std;
bool detectCapitalUse(string word){
    int n=word.size();
    int upperCount=0;
    for(auto c:word){
        if(isupper(c)) upperCount++;
    }
    if(upperCount==n) return true;
    if(upperCount==0) return true;
    if(upperCount==1 && isupper(word[0])) return true;
    return false;
}
int main(){
    cout<<detectCapitalUse("USA")<<endl;
    cout<<detectCapitalUse("leetcode")<<endl;
    cout<<detectCapitalUse("Google")<<endl;
    cout<<detectCapitalUse("uSa")<<endl;
    cout<<detectCapitalUse("leeTcode")<<endl;
    cout<<detectCapitalUse("GoGle")<<endl;
    return 0;
}