#include<iostream>
using namespace std;
int is_factorail(int n)
{
    int factorial=1;
    for(int i=1;i<=n;i++)
    {
        factorial=factorial*i;
    }
    return factorial;
}
int main()
{
    int n;
    cout<<"Enter the Number:";
    cin>>n;
    float ans=is_factorail(n);
    cout<<"The factotal of "<<n<< " is:"<<ans<<endl;
    return 0;
}
