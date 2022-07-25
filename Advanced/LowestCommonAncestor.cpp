#include <bits/stdc++.h>

using namespace std;

/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/

Node * lca(Node *root, int v1, int v2) {
    if (root == nullptr)
        return nullptr;
    int data = root->data;
    if (v1 < data && v2 < data)
        return lca(root->left, v1, v2);
    if (v1 > data && v2 > data)
        return lca(root->right, v1, v2);
    return root;
}