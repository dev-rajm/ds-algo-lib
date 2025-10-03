#include <bits/stdc++.h>
using namespace std;

int countNodes(TreeNode *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftCount = countNodes(root->left);
    int rightCount = countNodes(root->right);
    return 1 + leftCount + rightCount;
}