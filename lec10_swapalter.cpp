#include<iostream>
using namespace std;
void printodday(int odd[],int size)
{
    for (int i = 0; i < size; i++)
    {
        cout<<odd[i];
    }
    
}

void swapalternate(int odd[],int size)
{
    int i=0;
    while (i+1<size)
    {
        swap(odd[i],odd[i+1]);
        i+=2;
    }
    
}
int main()
{   
    int odd[7]={1,2,3,4,5,6,7};
    int even[6]={1,2,3,4,5,6};
    swapalternate(odd,7);
    printodday(odd,7);
     swapalternate(even,6);
     cout<<endl;
    printodday(even,6);

}