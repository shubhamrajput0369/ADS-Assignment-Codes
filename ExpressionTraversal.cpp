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
