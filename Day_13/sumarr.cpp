#include <iostream>
#include <array>
using namespace std;
int main()
{
    cout <<"enter the no of terms";
    int n;
    cin >> n;
    int arr[n];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        printf("enter the arr[%d]",i);
        cin >> arr[i];
        sum+=arr[i];
    }
   float avg=(float)sum/n;
   cout << "sum is:" << sum<< endl;;
   cout << "average is:" << avg;
   return 0;

}