#include <iostream>
using namespace std;

int get_sum(int n)
{
    int sum = 0;
    for (int i = 2; i <= n; i=i+2)
    {
        sum = sum + i;
    }
    return sum;
}
int main()
{
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int ans = get_sum(n);
    cout << "The sum of even numbers is:" << ans << endl;
    return 0;
}