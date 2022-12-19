#include<iostream>
using namespace std;
int findunique(int arr[],int n)
{
    int ans=0;
    for ( int i = 0; i < n; i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}
int main()

{
    int arr[7]={1,1,2,2,4,4,5};
    cout<<findunique(arr,7);
    
}
