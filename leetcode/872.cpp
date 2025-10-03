#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;
struct Node
{
    struct Node *left;
    int val;
    struct Node *right;
};

void getLeafSeq(struct Node *root, vi &vs)
{
    if (!root)
        return;
    if (!root->left && !root->right)
    {
        vs.push_back(root->val);
        return;
    }
    getLeafSeq(root->left, vs);
    getLeafSeq(root->right, vs);
}

bool leafSimilar(struct Node *root1, struct Node *root2)
{
    vi vs1, vs2;
    getLeafSeq(root1, vs1);
    getLeafSeq(root2, vs2);

    return vs1 == vs2;
}