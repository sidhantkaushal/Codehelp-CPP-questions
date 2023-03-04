#include<iostream>
#include<stack>
using namespace std; 
class Stack{
    //properties
    public:
    int * arr;
    int size;
    int top;
// behaviour

    Stack(int size)
    {
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int element)
    {
        if (size-top>1){
                top++;
                arr[top]=element;
            }
        else
        {
            cout<<"Stack overflow"<<endl;
        }
    }


    void pop()
    {
        if(top>=0)
        {
            top--;
        }
        else
        {
        cout<<"Stack underflow"<<endl;
        }
    }

    int peek(){
    if(top>=0){
        return arr[top];
    }
    else{
        cout<<"Stack is empty"<<endl;
        return -1;
    }
}
    bool isEmpty(){
    if(top==-1){
        return true;
    }
    else{
        return false;
    }
}
};




 
int main(){

    // stack<int> s;
    // s.push(1);
    // s.push(2);
    // s.push(3);
    // s.push(4);

    // s.pop();
    // cout<<s.top();
    // cout<<endl;
    // cout<<s.empty()<<endl;
    // cout<<s.size()<<endl;

    Stack s(5);
    s.push(1);
    s.push(2);
    s.push(2);
    s.push(2);
    s.push(2);
    s.push(2);
    s.push(2);
    s.push(2);

    

    return 0;
}