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

class B:public A{ 
    
};

class C:public B{ 

};


int main()
{
    C object1;
    object1.getme();
    return 0;
}