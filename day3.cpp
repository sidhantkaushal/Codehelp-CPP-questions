#include <iostream>
using namespace std;

int main()
{   char ch;
    cout<<"Enter a character: "<<endl;
    cin>>ch;
    
    if(ch>='a' && ch<='z')
    {
        cout<<"Lowercase";
    }
    else if(ch>='A' && ch<='Z')
    {
        cout<<"Uppercase";
    }
    else if(ch>='0' && ch<='9')
    {
        cout<<"Numeric";
    }
    else 
    {
        cout<<"special character";
    }

}