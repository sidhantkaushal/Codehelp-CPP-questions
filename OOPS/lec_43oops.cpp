#include <iostream>
using namespace std;

class Human{
    public:
    int height;
    int weight;
    int age;
    public:
    int getAge()
    {
        return this->age;
    }
    void setWeight(int w)
    {
        this->weight = w;
    }
};

class Male : public Human{
    public:
    string color;

    void sleep()
    {
        cout<<"Male is sleeping"<<endl;
    }
};

int main()
{
    Male object1;
    object1.setWeight(10);
    cout<<object1.weight<<endl;
    object1.sleep();
    return 0;
}