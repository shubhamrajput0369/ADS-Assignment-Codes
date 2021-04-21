// Author: Shubham Bhagwansing Rajput
// CPP

#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *lf,*rt;
};
class AVL
{
public:
        node* root;

    AVL()
{
        root=NULL;
}
    node* insert_node(node* root,int value);
    node* balance(node *T);
    int height(node *temp);
    int B_Factor(node *temp);
    node* rotate_right(node *parent);
    node* rotate_left(node *parent);
    node* RL(node *parent);
    node* RR(node *parent);
    node* LR(node *parent);
    node* LL(node *parent);
    void preOrder(node*);
    void inOrder(node*);
    void postOrder(node*);
    node* getroot()
    {
        return root;
    }
};
void AVL::preOrder(node *cn)
{
    if(cn != NULL)
    {
        cout<<cn->data<<" ";
        preOrder(cn->lf);
        preOrder(cn->rt);
    }

}


void AVL::inOrder(node *cn)
{
    if(cn != NULL)
    {

        inOrder(cn->lf);
        cout<<cn->data<<" ";
        inOrder(cn->rt);
    }
}


void AVL::postOrder(node *cn)
{
    if(cn != NULL)
    {
        postOrder(cn->lf);
        postOrder(cn->rt);
        cout<<cn->data<<" ";
    }
}

node* AVL::insert_node(node* root,int value)
{
    //cout<<"\n IN INSERT FUNCTION!!!";
    if(root==NULL)
    {
         root=new node;
         root->data=value;
         root->lf=root->rt=NULL;
         return root;
    }
    else if(value<root->data)
    {
        root->lf=insert_node(root->lf,value);
        root=balance(root);
    }
