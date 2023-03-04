#include<iostream>
using namespace std;
int firstoccurence(int arr[],int n,int key)
{
    int s=0,e=n-1,mid=s+(e-s)/2,ans=-1;
    while(s<=e)
    {
       if(key==arr[mid])
    {
        ans=mid;
        e=mid-1;
    }
    else if(key<arr[mid])
    {
        e=mid-1;
    }
    else if(key>arr[mid])
    {
        s=mid+1;
    }
    mid=s+(e-s)/2;
    }
    
    return ans;
}
int lastoccurence(int arr[],int n,int key)
{
    int s=0,e=n-1,mid=s+(e-s)/2,ans=-1;
    while(s<=e)
    {
     if(key==arr[mid])
    {
        ans=mid;
        s=mid+1;
    }
    else if(key<arr[mid])
    {
        e=mid-1;
    }
    else if(key>arr[mid])
    {
        s=mid+1;
    }
    mid=s+(e-s)/2;
    }
    
    return ans;
}
int main()
{   int k;
    cin>>k;
    int arr[12]={1,2,3,4,4,5,5,5,5,6,7,8};
    cout<<"first occurence of"<<k<<" is "<<firstoccurence(arr,12,k)<<endl;
    cout<<"last occurence of"<<k<<" is "<<lastoccurence(arr,12,k)<<endl;
    return 0;
}
