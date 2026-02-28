#include<iostream>
using namespace std;
float area_of_circle(float r)
{
    float area=3.14*r*r;
    return area;
}
int main()
{
    float r;
    cout<<"Enter the radius of circle:";
    cin>>r;
    float ans=area_of_circle(r);
    cout<<"The area of circle is:"<<ans<<endl;
    return 0;
}
