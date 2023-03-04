#include<iostream>
using namespace std;
printArray(int arr[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    
}
void selectionsort(int arr[],int n)
{   
   for(int i=0;i<n-1;i++)
   {
      int minindex=i,j;
       for(j=i+1;j<n;j++)
       {
           if(arr[j]<arr[minindex])
               minindex=j;
       }
     swap(arr[minindex],arr[i]);
   }
   printArray(arr,n);
}
int main()
{
    int arr[10]={1,2,3,5,7,8,9,4,3,5};

    selectionsort(arr,10);
}