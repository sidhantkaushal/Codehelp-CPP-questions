#include<iostream>
using namespace std;

getSum(int arr[],int size)
{
    int sum =0;
    for (int i = 0; i < size; i++)
    {
        sum+=arr[i];
    }
    
    return sum;
}
int main()
{   int arr[100],size;
    cout<<"Enter size of array";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout<<"Sum of elements : "<<getSum(arr,size)<<endl;
}