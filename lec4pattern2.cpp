#include <iostream>
using namespace std;
int main()
{   int n,i,j;
    cout<<"Enter a number :";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for ( j = 1;j <= n; j++)
        {
            cout<<n-j+1;
        }
        cout<<endl;
        
    }
    return 0;
}

