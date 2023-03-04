#include<iostream>
using namespace std;
int pivot(int arr[],int size)
{
    int s=0,e=size-1,mid=s+(e-s)/2;
    while(s<e)
    {
        if(arr[mid]>=arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    return e;
}
int main()
{
    int arr1[6]={5,6,1,2,3,4};
    cout<<pivot(arr1,6);

}
