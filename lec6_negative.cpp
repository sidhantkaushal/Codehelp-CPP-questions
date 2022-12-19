

#include<iostream>
using namespace std;
#include<math.h>
int main()
{
     int a,n,bit,ans=0,i=0;
    cout<<"enter a number to get its binary";
    cin>>n;
    a=-(n);
    while(a!=0)
    {
     bit=(a&1);
     bit=!bit;
     ans=(bit*pow(10,i))+ans;
     a=a>>1;
     i++;
    }
    ans=ans+1;
    cout<<ans;
    return 0;
}
