#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "enter number ";
    int a ;
    cin >> a;
    
    int fact=1;
    for(int i=1;i<=a;i++)
    fact*=i;
    cout << "factorial is " << fact;
    return 0;
}