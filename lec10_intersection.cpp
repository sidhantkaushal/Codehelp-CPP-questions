#include<iostream>
using namespace std;
void intersection1(int arr[],int n,int arr2[],int m)
{
    for (int i = 0; i <n ; i++)
    {   int ele=arr[i];
        for (int j = 0; j <m; j++)
        {
            if(arr2[j] == ele)
            {
                cout<<arr[i];
                arr2[j]=0;
            }
        }
        
    }
    
}

void intersection2(int arr1[],int n,int arr2[],int m)
{ int i=0,j=0;
    while(i<n&&j<m)
    {
        if(arr1[i]==arr2[j])
        {
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        if(arr1[i]>arr2[j])
        {
            j++;
        }
        if(arr1[i]<arr2[j])
        {
            i++;
        }
    }
}
int main()
{
    int arr1[6]={1,2,3,4,5,6};
    int arr2[4]={1,1,4,6};
    intersection2(arr1,6,arr2,4);
}