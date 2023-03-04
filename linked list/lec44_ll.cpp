#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};

    void print(Node*&head)
    {
        Node*temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }

    void insertathead(Node*&head,int data)
    {
        Node *temp=new Node(data);
        temp->next=head;
        head=temp;
    }
    void insertattail(Node*&tail,int data)
    {
        Node *temp=new Node(data);
        tail->next=temp;
        temp->next=NULL;
        tail=tail->next;
    }
    void insertatposition(Node*tail,Node*head,int data,int position){

    if(position == 1)
    {
            insertathead(head,23);
            return;
        }
    else
    {
        int count=1;
        Node* temp=head;
        while(count<position-1)
        {
            temp=temp->next;
            count++;
        }
        if(temp->next==NULL){
            insertattail(tail,data);
            return;
        }
        Node * newNode=new Node(data);
        newNode->next=temp->next;
        temp->next=newNode;

    }


    }

int main()
{
    // Creating a new Node dynamically
    Node *Node1 = new Node(0);
    Node *head=Node1;
    Node *tail=Node1;
    insertathead(head,1);
    insertathead(head,2);
    insertathead(head,3);
    insertattail(tail,3);
    insertattail(tail,4);
    insertattail(tail,5);
    insertatposition(tail,head,10,2);
    print(head);

  return 0;
}