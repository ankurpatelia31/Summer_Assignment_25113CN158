#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,sum=0;
    cout<<"enter the number";
    cin>>a;
    for(int i=1;i<a;i++)
    if(a%i==0)
    sum+=i;
    if(sum==a)
    cout<<"perfect";
    else
    cout<<"not perfect";
    return 0;

}