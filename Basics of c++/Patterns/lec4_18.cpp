#include <iostream>
using namespace std;
int main()
{   int n,i,j;
    char c,ch ='A';
    cout<<"Enter a number :";
    cin>>n;
    for(i=1;i<=n;i++)
    {  c=ch+i-1;
        for ( j = 1;j <= n; j++)
        {   
            cout<<c;
            c++;
        }
        
        cout<<endl;
        
    }
    return 0;
}