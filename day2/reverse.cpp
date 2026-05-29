#include <iostream>
#include <string>
using namespace std;
int main()
{
    cout << "enter the number";
    int n;
    cin >> n;
    int a,rev=0;
    for(;n>0;n=n/10)
    {
        a=n%10;
        rev=rev*10+a;
    }
    cout << rev;
    return 0;
    
}