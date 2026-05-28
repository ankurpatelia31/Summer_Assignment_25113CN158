#include <iostream>
#include <string>
using namespace std;
int main() 
{
    cout << "enter the number ";
    int a;
    cin >> a;
    cout << " enter the last multiplier ";
    int l;
    cin >> l;
    for(int i=1;i<=l;i++)
    {
        cout << a << "  times " << i << "  is " << a*i << '\n';
    }
    return 0;
}