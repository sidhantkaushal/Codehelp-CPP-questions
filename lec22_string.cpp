#include<iostream>
using namespace std;
int length(char str[])
{
    int count=0;
    for (int i = 0; str[i]!='\0'; i++)
    {
        count++;
    }
    return count;

}
void reverse(char str[],int n)
{
    int s=0,e=n-1;
    while(s<e)
    {
        swap(str[s],str[e]);
        s++;
        e--;
    }
}
int main()
{
    char str[20];
    cin>>str;
    int len=length(str);
    cout<<"length ="<<len<<endl;
    reverse(str,len);
    cout<<str;
return 0;
}