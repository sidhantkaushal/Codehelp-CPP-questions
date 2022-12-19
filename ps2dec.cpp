#include<iostream>
#include<string>
using namespace std;

    struct student 
{
   char name[50];
   int roll_no[100];
   char department[50];
   char course[50];
   char joining[50];
};

int main()
{
 struct student s[450];
 int year;

 for(int i=1;i<=3;i++)
 {   
     cout<<"enter your name";
     cin>>s[i].name;
     cout<<"enter you roll no";
     cin>>*s[i].roll_no;
     cout<<"enter your department";
     cin>>s[i].department;
     cout<<"enter your course";
     cin>>s[i].course;
     cout<<"enter your joining year";
     cin>>s[i].joining;
 }

 cout<<"Enter year of joining";
 cin>>year;

 for ( int i = 1; i <=3; i++)
 {
    if(s[i].joining==year)
    {
        cout<<s[i].name;
    }
    else{
        cout<<"-1";
    }
 }
 

 

return 0;
}