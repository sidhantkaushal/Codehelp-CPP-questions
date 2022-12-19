#include <iostream>
using namespace std;
int main()
{   int n,i,j;
    cout<<"Enter a number :";
    cin>>n;
    for(i=1;i<=n;i++)
    { 
        {   
            for(int space=1;space<=n-i;space++)
            {
                cout<<" ";
            }
            for (int j= 0; j < i; j++)
            {
                cout<<"*";
            }
            
        }
        
        cout<<endl;
        
    }
    return 0;
}