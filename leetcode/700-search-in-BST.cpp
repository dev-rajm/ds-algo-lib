#include <bits/stdc++.h>
using namespace std;

TreeNode *searchBST(TreeNode *root, int val)
{
    TreeNode *p = root;
    if (!root)
        return NULL;
    if (key < p->val)
        return searchBST(p->left, key);
    else if (key > p->val)
        return searchBST(p->right, key);
    else
        return p;
}