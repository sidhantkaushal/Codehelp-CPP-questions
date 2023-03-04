#include<iostream>
using namespace std;
main()
{
    int n,i,j;
    cout<<"Enter value of n:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<"*";
        }
        cout<<endl;

    }
}