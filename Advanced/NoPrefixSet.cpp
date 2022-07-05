#include <bits/stdc++.h>

using namespace std;

class Trie
{
    struct Node
    {
        bool endWord = false;
        unordered_map<char, unique_ptr<Node> > children;
    };

    Node root;
        
    public:
        bool insert(const string& s)
        {
            bool foundPrefix = false;
            Node* node = &root;
            for (char c : s)
            {
                auto found = node->children.find(c);
                if (found == node->children.end())
                {
                    if (node->endWord)
                        foundPrefix = true;
                    Node* newNode = new Node();

                    node->children[c] = unique_ptr<Node>(newNode);
                    node = newNode;
                }
                else
                    node = found->second.get();
            }
            if (node->endWord)
                foundPrefix = true;
            node->endWord = true;
            return foundPrefix || node->children.size() > 0;
        }
};



int main() {
    int size;
    cin >> size;
    
    Trie trie;
    string s;
    while (size--) {
        cin >> s;
        if (trie.insert(s)) {
            cout << "BAD SET\n" << s << endl;
            return 0;
        }
    }
    cout << "GOOD SET" << endl;
    return 0;
}