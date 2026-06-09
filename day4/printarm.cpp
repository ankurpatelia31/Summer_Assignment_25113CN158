#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    cout << "enter range";
    int n;
     cin >> n;
     int count=0,sum=0;
     for(int i=0;i<=n;i++)
     {
       count =0;
        sum=0;
       for(int j=i;j>0;j=j/10)
       count++;
       for(int k=i;k>0;k=k/10)
       {
        int a=k%10;
        sum=sum+pow(a,count);
       }
       if(sum==i)
       cout << i <<",";
      
     }

}
