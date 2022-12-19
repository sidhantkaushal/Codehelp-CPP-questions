#include<iostream>
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
 struct student s1,s2,s3;
 for(int i=1;i<=3;i++)
 {
     s1.roll_no[i]=i;
 }
 for(int i=1;i<=3;i++)
 {
     s1.roll_no[i]=i;
 }

 for(int i=1;i<=3;i++)
 {
     cout<<s1.roll_no[i];
 }

return 0;
}