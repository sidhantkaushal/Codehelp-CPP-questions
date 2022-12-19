 #include <iostream>
using namespace std;

class A{
  public:
  int age;
  void getme()
  {
    cout<<"I am A"<<endl;
  }
   
  
};

class B{ 
    
public:
void getme2()
  {
    cout<<"I am B"<<endl;
  }
};

class C:public A,public B{  
    
};


int main()
{
    C object1;
    object1.getme();
    object1.getme2();
    return 0;
}