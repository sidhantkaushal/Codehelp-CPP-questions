#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Hero{
    
    //properties 
    private: 
    int health=0;
    char level;
    static int timetocomplete;
    public:
    char *name;
    Hero()
    {
        cout<<"I am called"<<endl;
        name=new char[100];
    }
    Hero(int health,char level)
    {
        this->health=health;
        this->level=level;
    }
    //copy constructor
    Hero(Hero& temp)
    {   cout<<"Copy constructor called:";
        this->health=temp.health;
        this->level=temp.level;
    }

    int gethealth()
    {
        return health;
    }
    char getlevel()
    {
        return level;
    }
    void sethealth(int h)
    {
        health=h;
    }   
    void setlevel(char ch)
    {
        level=ch;
    }
    void print()
    {
        cout<<this->health<<endl;
        cout<<this->level<<endl;
    }
    void setName(char name[])
    {
        strcpy(this->name,name);
    }
    static int  random()
    {
        
    }
};
int Hero::timetocomplete=5;
int main()
{


    //h1.sethealth(12);
    //h1.setlevel('D');
    //Hero h1;
    //char name[7]="Sid";
    //h1.setName(name);
    //h1.print();


    // Hero h(100,'A');
    // h.print();
    // //copy constructor
    // Hero c(h);
    // c.print();

    /*
    //Static allocation
     Hero h1;
    //dynamic allocation
    Hero *b=new Hero;
    cout<<"Level is"<<b->gethealth()<<endl;
    b->sethealth(100);
    cout<<"Level is"<<b->gethealth()<<endl;
   // Hero sidhant;

    //cout<<sizeof(h1);
    //cout<<"My health is "<< sidhant.gethealth() << endl;
    //sidhant.sethealth(49);
    //sidhant.setlevel('a');
    //cout<<"My health is "<< sidhant.gethealth()<< endl;
    //cout<<"My level is "<< sidhant.getlevel()<< endl;
*/
    return 0;
}