
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
     int n,newbin,value,ans=0,i=0;
    cout<<"enter a number to get its complementry";
    cin>>n;
    while(n!= 0)
    {
       int bit=(n&1);
           bit=!bit;
        ans=(bit*pow(10,i))+ans;
        n=n>>1;
        i++;
    }
    cout<<ans;
    while(ans!=0)
    {   int j=0;
        int digit=ans%10;
        if(digit==1)
        {
            value=pow(2,j)+value;
        }
        j++;
        ans/10;
    }
    cout<<value;

    return 0;
}
