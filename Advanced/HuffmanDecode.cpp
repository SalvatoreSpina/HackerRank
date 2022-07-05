#include <bits/stdc++.h>

using namespace std;

/* 
The structure of the node is

typedef struct node {

	int freq;
    char data;
    node * left;
    node * right;
    
} node;

*/

void decode_huff(node * root, string s) {
    node *tmp = root;
    for (char ch : s) {
        if (ch == '1') {
            tmp = tmp->right;
            if (!tmp->right) {
                cout << tmp->data;
                tmp = root;
            }
        }
        else if (ch == '0') {
            tmp = tmp->left;
            if (!tmp->left) {
                cout << tmp->data;
                tmp = root;
            }
        }  
    }
}
