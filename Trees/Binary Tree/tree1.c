#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct Node
{
    char data;
    struct Node* left;
    struct Node* right;

};
int max(int a ,int b)
{
    if (a>b)
    return a;
    else
    return b;
}


struct Node* makeNode(char x)
{
    struct Node *p;
    p=(struct Node*)malloc(sizeof(struct Node));
    p->data=x;
    p->left=NULL;
    p->right=NULL;

}
void createtree(struct Node**root)
{   int x;
    struct Node *l,*r;
    printf("Tell Wheather %d has a left Node?(1/0)",(*root)->data);
    scanf("%d",&x);
    p=makeNode(x);
    *l->left=makeNode(x);
    createtree(*l);

    int x;
    struct Node *,*r;
    printf("Tell Wheather %d has a left Node?(1/0)",*root->data);
    scanf("%d",&x);
    *l->left=makeNode(x);
    createtree(*l);
}

void preorder(struct Node * root)
{
    if (root!=NULL)
    {
        printf(" %c",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void inorder(struct Node * root)
{
    if (root!=NULL)
    {
        
        preorder(root->left);
        printf(" %c",root->data);
        preorder(root->right);
    }
}
void postorder(struct Node * root)
{
    if (root!=NULL)
    {
        
        preorder(root->left);
        preorder(root->right);
        printf(" %c",root->data);
    }
}

int count(struct Node* root)
{
    if(root==NULL)
      return 0;

    else
    return 1+ count(root->left)+count(root->right);
}

int countleaf(struct Node* root)
{
  
  if (root==NULL)
     return 0;
  else 
     {if(root->left==NULL && root->right==NULL)
        return 1;

     else
         return countleaf(root->left) + countleaf(root->left) ;
     }
}

int height (struct Node *root)
{
    if(root==NULL)
    return 0;
    else
    {
        if(root->left==NULL && root->right==NULL)
        return 0;
        else
        return max(height(root->left),height(root->right))+1;
    }

}
bool iscomplete(struct Node*root)
{
    int h=height(root),n=countNode(root);
    if(pow(((2,h+1)-1)*)

}

int main()
{
    struct Node*root;
     root=makeNode('A');
     root->left=makeNode('B');
     root->right=makeNode('c');
     root->left->left=makeNode('D');
     root->right->right=makeNode('E');
     preorder(root);
     printf("\n");
     inorder(root);
     printf("\n");
     postorder(root);
     printf("\n");
     printf("Number of Nodes in tree = %d",count(root));
     printf("Number of leaf Nodes in tree = %d",countleaf(root));
     printf("Height of tree = %d",height(root));

}