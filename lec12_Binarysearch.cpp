#include<iostream>
using namespace std;
binarysearch(int arr[],int n,int key)
{
    int start=0;
    int e=n-1;
    int mid=(n+e)/2;
    while(start<=e)
    {
        if(key==arr[mid])
        {
            return mid;
        }
        if(key<mid)
        {
            e=mid-1;
        }
        else
        {
            start=mid+1;
        }
        mid=start+(e-start)/2;
    }
    cout<<mid<<endl;

    if(arr[mid]<key)
        {
            return mid+1;
        }
        else
        {
            return mid-1;
        }


}

int main()
{
    int arr[]={1,3,6,8},n,key;
    cout<<"Enter size and key"<<endl;
    cin>>n>>key;
    cout<<key<<" is present at "<<binarysearch(arr,n,key);


}
