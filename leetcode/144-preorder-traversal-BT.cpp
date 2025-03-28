#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    struct TreeNode *left;
    int val;
    struct TreeNode *right;
};

vector<int> preorderTraversalHelper(TreeNode *root, vector<int> &vs)
{
    if (root != NULL)
    {
        vs.push_back(root->val);                  // Push the value of currect node
        preorderTraversalHelper(root->left, vs);  // Traverse all left child nodes
        preorderTraversalHelper(root->right, vs); // Traverse all right child nodes
    }

    return vs;
}

vector<int> preorderTraversal(TreeNode *root)
{
    vector<int> vs;
    return preorderTraversalHelper(root, vs);
}