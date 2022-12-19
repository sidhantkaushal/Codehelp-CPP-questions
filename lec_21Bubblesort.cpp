#include<iostream>
using namespace std;
printArray(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
void bubblesort(int arr[],int n)
{   
   for(int i=0;i<n-1;i++)
   {
       for(int j=0;j<n-i-1;j++)
       {
           if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);   
       }
     
   }
   printArray(arr,n);
}
int main()
{
    int arr[10]={1,2,3,5,7,8,9,4,3,5};

    bubblesort(arr,10);
}