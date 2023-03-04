 #include <iostream>
using namespace std;

class A{
  public:
  int age;
  int getage()
  {
    return age;
  }
   
  
};

class B:public A{ 
};


int main()
{
    B object1;
    cout<<object1.getage()<<endl;
    return 0;
}