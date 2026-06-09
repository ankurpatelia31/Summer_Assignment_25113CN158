#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    cout << "enter the number ";
    int a;
    cin >> a;
    for(int i=1;i<=a;i++)
    {
        if(a%i==0)
        cout <<  i << ',';
    }
    return 0;
}