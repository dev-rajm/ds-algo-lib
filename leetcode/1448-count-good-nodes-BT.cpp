#include <bits/stdc++.h>
using namespace std;

struct Node
{
    struct Node *left;
    int val;
    struct Node *right;
};

int goodNodes(struct Node *root)
{
    if (!root)
        return 0;
    return goodNodesHelper(root, root->val);
}

int goodNodesHelper(struct Node *root, int maxVal)
{
    if (!root)
        return 0;
    int cnt = 0;
    if (root->val >= maxVal)
    {
        cnt += 1;
        maxVal = root->val;
    }

    cnt += goodNodesHelper(root->left, maxVal);
    cnt += goodNodesHelper(root->right, maxVal);

    return cnt;
}