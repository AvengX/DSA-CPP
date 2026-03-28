/*There are n bulbs that are initially off. You first turn on all the bulbs, then you turn off every second bulb.
On the third round, you toggle every third bulb (turning on if it's off or turning off if it's on). For the ith round, you toggle every i bulb. For the nth round, you only toggle the last bulb.
Return the number of bulbs that are on after n rounds.*/

#include<bits/stdc++.h>
using namespace std;

int bulbSwitch(int n){
    return sqrt(n);  // that's it!
}

int main(){
    cout << bulbSwitch(3)  << "\n";  // 1
    cout << bulbSwitch(4)  << "\n";  // 2
    cout << bulbSwitch(9)  << "\n";  // 3
    cout << bulbSwitch(10) << "\n";  // 3
    cout << bulbSwitch(5) << "\n";
    return 0;
}