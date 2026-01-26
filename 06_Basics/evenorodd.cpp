#include<iostream>
using namespace std;
bool check_even(int n)
{
    if(n%2==0)
    {
       return true;
    }
    else{
        return false;
    }
}
int main()
{
int n;
cout<<"Enter the number to check wheather is even or odd:";
cin>>n;
bool ans=check_even(n);
if (ans){
    cout<<n<<" is even";
}else{
    cout<<n<<" is odd";
}

return 0;
}
