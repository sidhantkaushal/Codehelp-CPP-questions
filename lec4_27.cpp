#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter a number :";
    cin>>n;
    for(i=1;i<=n;i++)
    {  

        for ( j = 1;j <=n-i+1; j++)
        {   
            cout<<j;
        }
        for (int space = 1; space <=2*i-2; space++)
        {
            cout<<" ";
        }
        int c=n-i+1;
        for ( j = 1;j <=n-i+1; j++)
        {  
            cout<<c;
            c--;
        }
        
        
        cout<<endl;
        
    }
    return 0;
}