#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "enter number";
    int n;
    cin >> n;
    int s=n;
    int sum=0;
    int count=0;
    for(;n>0;n=n/10)
    count++;
    for(int i=s;i>0;i=i/10)
    {
      int a=i%10;
      sum=sum+pow(a,count);
    }
    if( sum == s )
    cout << "armstrong";
    else
    cout << "Not armstrong";
    return 0;

}