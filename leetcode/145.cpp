#include <bits/stdc++.h>
using namespace std;

vector<int> postorderTraversal(TreeNode *root)
{
    vector<int> vs;
    return postorderTraversalHelper(root, vs);
}

vector<int> postorderTraversalHelper(TreeNode *root, vector<int> &vs)
{
    if (root)
    {
        postorderTraversalHelper(root->left, vs);
        postorderTraversalHelper(root->right, vs);
        vs.emplace_back(root->val);
    }
    return vs;
}
