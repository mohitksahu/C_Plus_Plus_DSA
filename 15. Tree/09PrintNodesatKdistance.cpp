#include <bits/stdc++.h>
#include "tree.h"
using namespace std;



int main() {
    node *root = new node(3);

    root->left = new node(2);
    root->right = new node(4);
    root->right->right = new node(5);
    root->left->left = new node(1);
    
    cout<<"The Nodes at 2 distance : "<<endl;
    NodeAtKdist(root,2);

    return 0; 
}