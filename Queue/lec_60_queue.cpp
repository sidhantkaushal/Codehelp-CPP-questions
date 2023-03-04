#include<iostream>
using namespace std;
class queue{
    public:
    int * arr;
    int size;
    int front;
    int rear; 

    queue(int size){
        this->size=size;
        arr= new int[size];
        front=0;
        rear=0;
    }

    void enqueue(int element){
        if(rear==size){
            cout<<"queue is full"<<endl;
        }
        else{
            arr[rear]=element;
            rear++;
        }
    }

    int dequeue(){
        int ans;
        if(front==rear){
            return -1;
        }
        else{
            ans=arr[front];
            arr[front]=-1;
            front++;
            if(front==rear) {
                front=0;
                rear=0;
            }
        }
        return ans;
    }
    // int front(){
    //     if(front==rear){
    //         return -1;
    //     }
    //     else return arr[front];

    // }

    bool isEmpty(){
        if(front==rear){
            return true;
        }
        else return false;
    }
};

int main(){

    // queue<int>  q;
    // q.push(1);
    // q.push(2);
    // q.push(3);
    // q.push(4);
    // q.push(5);
    // q.pop();
    // cout<<q.front();
    queue q(1);
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    


    return 0;

}