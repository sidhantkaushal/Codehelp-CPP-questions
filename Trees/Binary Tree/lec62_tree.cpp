#include <iostream>
#include <queue>
using namespace std;

class Node{
    public:
    int data ;
    Node * left;
    Node * right;

    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

Node *buildtree ( Node * root)
{

    cout<<"Enter the data :"<<endl;
    int data;
    cin>>data;
    root=new Node(data);

    if(data==-1) return NULL;

    cout<<"Enter data to insert in left node of "<<data<<":"<<endl;
    root->left=buildtree(root->left);
    cout<<"Enter data to insert in right node of "<<data<<":"<<endl;
    root->right=buildtree(root->right);
    return root;
}

void level_order_traversal(Node* root){
    queue<Node*> q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node*temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
            
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }

}
void in_order(Node* root){
    if(root==NULL){
        return;
    }
    in_order(root->left);
    cout<<root->data<<" ";
    in_order(root->right);
}
void post_order(Node* root){
    if(root==NULL){
        return;
    }
    post_order(root->left);
    post_order(root->right);
    cout<<root->data<<" ";
}
void pre_order(Node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    pre_order(root->left);
    
    pre_order(root->right);
}



// void BuildfromlevelOrder(Node* &root){
//     queue<Node*> q;
//     q.push(root);
//     int data;
//     cout<<"Enter data for root"<<endl;
//     cin>>data;
//     root=new Node(data);
//     q.push(root);
//     while(!q.empty()){
//         Node*temp=q.front();
//         q.pop();
        
//     }


int main()
{
    Node *root=NULL;
    root=buildtree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    // level_order_traversal(root);
    in_order(root);
    cout<<endl;
    post_order(root);
    cout<<endl;
    pre_order(root);
    cout<<endl;

    return 0;
}