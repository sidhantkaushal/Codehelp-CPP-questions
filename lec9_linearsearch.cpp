#include<iostream>
using namespace std;

bool linearsearch(int arr[],int size,int key)
{
    for (int i = 0; i < size; i++)
    {
        if(key==arr[i])
        {
            return 1;
        }
    }
    return  0;
}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8,9,10},size,key;
    
    cout<<"Enter the element to be found"<<endl;
    cin>>key;

    if(linearsearch(arr,size,key))
    {
        cout<<"Element is present"<<endl;
    }
    else
    {
        cout<<"Element is absent"<<endl;
    }
    return 0;
}