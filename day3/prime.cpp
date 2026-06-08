#include <iostream>
using namespace std;
int  main()
{
    cout << "enter the number ";
    int n;
    cin >> n;
    int count=0;
    for (int i =2;i<n/2;i++)
    {
        if(n%i==0)
        count++;
    }
    if(count==0)
    cout << "prime number";
    else
    cout <<"not a prime number";
    return 0;

}