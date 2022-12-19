
#include<iostream>
using namespace std;
#include<math.h>
int main()
{
     int n,bit,ans=0,i=0;
    cout<<"enter a number to get its binary";
    cin>>n;
    while(n!=0)
    {
     bit=(n&1);
     ans=(bit*pow(10,i))+ans;
     n=n>>1;
     i++;
    }
    cout<<ans;
    return 0;
}

