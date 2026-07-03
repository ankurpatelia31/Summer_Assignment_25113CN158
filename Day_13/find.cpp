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
     int max=arr[0],min=arr[0];
      for(int i=0;i<n;i++)
    {
         if(arr[i]>max)
        max=arr[i];
        if(arr[i]< min)
        min=arr[i];
    }

 cout << "max is:"<< max << endl;;
 cout << "min is:" << min;
 return 0;
}
