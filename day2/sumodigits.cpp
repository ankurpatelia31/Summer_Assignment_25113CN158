#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "enter the number";
    int a;
    cin >> a;
    int n;
    int sum=0;
    for(;a>0;a=a/10)
    {
        n=a%10;
        sum+=n;
    }
    cout << sum;
    return 0;
}