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
    else if(value>root->data)
        {
            root->rt=insert_node(root->rt,value);
            root=balance(root);
        }
    //cout<<"\n INSERTION DONE!!!!!!!!";
    return root;
}
int AVL::height(node* temp)
{
    int h=0;
    if(temp!=NULL)
    {
        int l_height=height(temp->lf);
        int r_height=height(temp->rt);
        int max_height=max(l_height,r_height);
        h=max_height+1;
    }
    return h;
}
int AVL::B_Factor(node* temp)
{
    int l_height=height(temp->lf);
    int r_height=height(temp->rt);
    int b_factor=l_height-r_height;
    return b_factor;
}

node* AVL::rotate_right(node* parent)
{
    node* temp;
    temp=parent->lf;
    parent->lf=temp->rt;
    temp->rt=parent;

    return temp;

}
node* AVL::rotate_left(node* parent)
{
    node* temp;
    temp=parent->rt;
    parent->rt=temp->lf;
    temp->lf=parent;

    return temp;
}
node* AVL::LL(node* parent)
{
    node *temp;
    temp=parent->rt;
    parent=rotate_right(parent);
    return parent;
}

node* AVL::RR(node* parent)
{
    node *temp;
    temp=parent->lf;
    parent=rotate_left(parent);
    return parent;
}
node* AVL::LR(node* parent)
{
    node* temp;
    temp=parent->lf;
    parent->lf=rotate_left(temp);
    temp=rotate_right(parent);
    return temp;
}
node* AVL::RL(node* parent)
{
    node* temp;
    temp=parent->rt;
        parent->rt=rotate_right(temp);
        temp=rotate_left(parent);

    return temp;
}

