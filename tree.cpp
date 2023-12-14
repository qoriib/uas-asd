#include <iostream>

using namespace std;

struct Node {
    Node *parent;
    Node *left;
    Node *right;

    string label;
};

int main(){
    Node *root = new Node();
    Node *child1 = new Node();
    Node *child2 = new Node();

    root->label = 6;
    root->parent = NULL;
    root->left = child1;
    root->right = child2;

    child1->label = 42;
    child1->parent = root;
    child1->left = NULL;
    child1->right = NULL;

    child2->label = 35;
    child2->parent = root;
    child2->left = NULL;
    child2->right = NULL;
}