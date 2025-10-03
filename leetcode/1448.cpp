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
    return goodNodesHelper2(root, INT_MIN);
}

int goodNodesHelper1(struct Node *root, int maxVal)
{
    if (!root)
        return 0;
    int cnt = 0;
    if (root->val >= maxVal)
    {
        cnt += 1;
        maxVal = root->val;
    }

    cnt += goodNodesHelper1(root->left, maxVal);
    cnt += goodNodesHelper1(root->right, maxVal);

    return cnt;
}

int goodNodesHelper2(struct Node *root, int maxVal)
{
    if (!root)
        return 0;
    maxVal = max(root->val, maxVal);

    int left = goodNodesHelper2(root->left, maxVal);
    int right = goodNodesHelper2(root->right, maxVal);

    return (root->val >= maxVal) + left + right;
}