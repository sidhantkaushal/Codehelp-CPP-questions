#include<iostream>
using namespace std;
class Hero
{   public:
    char initial='A';
    int age=30;
    Hero(int age)
    {
        this->age=age;
    }

    char getinitial()
    {
        return initial;
    }
     int getage()
    {
        return age;
    }
    int setinitial(char a)
    {
        initial=a;
    }
    int setage(int a)
    {
        age=a;
    }
    void print()
    {
        cout<<initial<<age<<endl;
    }
    
};
int main()
{
   
   Hero sid(40);
   sid.print();
   Hero *s=new Hero(12);
   s->print();
   
 
    return 0;
}