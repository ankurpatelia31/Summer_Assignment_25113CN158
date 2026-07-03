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
     int even=0,odd=0;
      for(int i=0;i<n;i++)
    {
         if(arr[i]%2==0)
        even++;
        else
        odd++;
    }

 cout << "even digits are:"<< even << endl;;
 cout << "odd terms are:" << odd;
 return 0;
}
