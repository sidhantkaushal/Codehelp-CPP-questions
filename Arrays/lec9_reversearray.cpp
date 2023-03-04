#include<iostream>
using namespace std;

void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
void reverse(int arr[],int n)
{
    int start=0,last=n-1;
    for (int i = 0; i < n; i++)
    {
         while(start<= last )
     {
         swap(arr[start],arr[last]);
         start++;
         last--;
     }
    }
}

int main()
{
    int arr[5]={1,2,3,4,5},size;

    reverse(arr,5);
    printArray(arr,5);
return 0;
}
