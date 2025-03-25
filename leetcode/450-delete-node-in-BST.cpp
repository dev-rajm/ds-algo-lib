#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    struct TreeNode *left;
    int val;
    struct TreeNode *right;
};

TreeNode *InSucc(TreeNode *p)
{
    while (p && p->left)
        p = p->left;
    return p;
};

TreeNode *deleteNode(TreeNode *root, int key)
{
    TreeNode *p = root;
    TreeNode *q, *t;

    if (!root)
        return NULL;
    if (key < p->val)
        p->left = deleteNode(p->left, key);
    else if (key > p->val)
        p->right = deleteNode(p->right, key);
    else
    {
        if (!p->left)
        {
            t = p->right;
            delete p;
            return t;
        }
        else if (!p->right)
        {
            t = p->left;
            delete p;
            return t;
        }
        else
        {
            q = InSucc(p->right);
            p->val = q->val;
            p->right = deleteNode(p->right, q->val);
        }
    }
    return p;
}