#include <iostream>
using namespace std;
int main()
{
    cout << " enter the range";
    int r,count,j,i;
    cin >> r;
    for( i=2;i<=r;i++)
    {
        count=00;
        for( j=2;j<i;j++)
        if(i%j==0)
       count++;
       if(count==0)
       cout << j <<",";
        
    }
    return 0;
}