#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    cout << "enter the number ";
    int a,count =0;
    cin >> a;
    for(int i=1;i<=a;i++)
    {
        count=0;
        if(a%i==0)
        {
            for(int j=2;j<i;j++)
        if(i%j==0)
        count++;
        if(count==0 && i!=1)
        cout << i<<",";
        }
    }
    return 0;

}