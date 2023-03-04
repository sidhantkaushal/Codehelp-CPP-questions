#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
//Constructor
    Node(int data)
    {
        this->data=data;
        this->next=NULL;
    }
};
void Insertathead(Node* &head,int data)
{
    Node * temp=new Node(data);
    temp->next=head;
    head=temp;
}
void Insertattail(Node* &tail,int data)
{
    Node * temp=new Node(data);
    tail->next=temp;
    tail=tail->next;
}
void Insertatpos(Node* &head,Node* &tail,int pos,int data)
{
    if(pos==1)
    {
        Insertathead(head,data);
        return;
    }
    Node * temp=head;
    int count=1;

    while(count < pos-1)
    {
        temp=temp->next;
        count++;
    }

    if(temp->next==NULL)
    {
        Insertattail(tail,data);
        return;
    }

    Node *Nodetoinsert=new Node(data);
    Nodetoinsert->next=temp->next;
    temp->next=Nodetoinsert;
}

void print(Node* &head)
{
    Node* temp=head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    
    // implementation in c;
    // struct Node* head = (struct Node*)malloc(sizeof(struct Node));
    Node * Node1=new Node(0);
    cout<<Node1->data<<endl;
    cout<<Node1->next<<endl;
     
    Node *head=Node1;
    Node *tail=Node1;
     print(head);
    Insertattail(tail,15);
     print(head);
     Insertattail(tail,12);
     print(head);
    Insertatpos(head,tail,1,20);
    print(head);
    Insertatpos(head,tail,2,30);
    print(head);
    Insertatpos(head,tail,6,40);
    print(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;


    return 0;
}