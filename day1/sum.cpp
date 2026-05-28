#include <iostream>
using namespace std;
int main()
{
    cout << "this is a progra to calculate sum of natural numbers upto number 'n'" << '\n';
    cout << "enter the last number ";
    int a;
    cin >> a;
    int sum=0;
    for(int i=1; i<=a ;i++)
        sum +=i;

cout << "the sum is " << sum;
return 0;
}