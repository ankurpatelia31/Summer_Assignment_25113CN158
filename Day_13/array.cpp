#include <iostream>
#include <array>
using namespace std;
int main()
{
    cout <<"enter the no of terms";
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        printf("enter the arr[%d]",i);
        cin >> arr[i];
    }
    cout << "array elements are:";
    for(int i=0;i<n;i++)
    {
       cout << arr[i] <<",";
    }
return 0;

}

