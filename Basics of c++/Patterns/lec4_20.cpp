 #include <iostream>
using namespace std;
int main()
{   int n,i,j;
    char c,ch ='A';
    cout<<"Enter a number :";
    cin>>n;
    for(i=1;i<=n;i++)
    {  
        for ( j = 1;j <= n-i+1; j++)
        {   
            cout<<"*";
        }
        for (int space = 1; space<=i-1; space++)
        {
            cout<<" ";
        }
        
        cout<<endl;
        
    }
    return 0;
}