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
