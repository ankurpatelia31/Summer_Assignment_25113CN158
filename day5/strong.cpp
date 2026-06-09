#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int a,b,c,d=0,psum=1;
    cout<<"enter the number";
    cin>>a;
    for(int i=a;i>0;i=i/10)
    {
        d+=psum;
        psum=1;
        b=i%10;
        for(c=1;c<=b;c++)
        psum*=c;
    }
    if(d==a)
    cout <<"strong num";
    else
    cout << "not strong num";
    return 0;

}