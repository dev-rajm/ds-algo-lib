#include <bits/stdc++.h>
using namespace std;

struct Node
{
    struct Node *lchild;
    int data;
    int height;
    struct Node *rchild;
} *root = NULL;

// Calculate height of nodes
int NodeHeight(struct Node *p)
{
    int hl, hr;
    hl = (p && p->lchild) ? p->lchild->height : 0;
    hr = (p && p->rchild) ? p->rchild->height : 0;

    return (hl > hr) ? hl + 1 : hr + 1;
}

// Calculate Balance Factor
int BalancedFactor(struct Node *p)
{
    int hl, hr;
    hl = (p && p->lchild) ? p->lchild->height : 0;
    hr = (p && p->rchild) ? p->rchild->height : 0;

    return hl - hr;
}

// Left-left rotation
struct Node *LLRotation(struct Node *p)
{
    struct Node *pl = p->lchild;
    struct Node *plr = pl->rchild;

    pl->rchild = p;
    p->lchild = plr;
    p->height = NodeHeight(p);
    pl->height = NodeHeight(pl);

    if (p == root)
        root = pl;

    return pl;
}

// Left-right rotation
struct Node *LRRotation(struct Node *p)
{
    struct Node *pl = p->lchild;
    struct Node *plr = pl->rchild;

    pl->rchild = plr->lchild;
    p->lchild = plr->rchild;
    plr->lchild = pl;
    plr->rchild = p;

    pl->height = NodeHeight(pl);
    p->height = NodeHeight(p);
    plr->height = NodeHeight(plr);

    if (root == p)
        root = plr;

    return plr;
}

// Right-right rotation
struct Node *RRRotation(struct Node *p)
{
    struct Node *pr = p->rchild;
    struct Node *prl = pr->lchild;

    pr->lchild = p;
    p->rchild = prl;
    p->height = NodeHeight(p);
    pr->height = NodeHeight(pr);

    if (p == root)
        root = pr;

    return pr;
}

// Right-left rotation
struct Node *RLRotation(struct Node *p)
{
    struct Node *pr = p->rchild;
    struct Node *prl = pr->lchild;

    pr->lchild = prl->rchild;
    p->rchild = prl->lchild;
    prl->rchild = pr;
    prl->lchild = p;

    pr->height = NodeHeight(pr);
    p->height = NodeHeight(p);
    prl->height = NodeHeight(prl);

    if (root == p)
        root = prl;

    return prl;
}

// Node insertion
struct Node *Insert(struct Node *p, int key)
{
    struct Node *t = NULL;
    if (p == NULL)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = key;
        t->height = 1;
        t->lchild = t->rchild = NULL;
        return t;
    }
    if (key < p->data)
    {
        p->lchild = Insert(p->lchild, key);
    }
    else if (key > p->data)
    {
        p->rchild = Insert(p->rchild, key);
    }
    p->height = NodeHeight(p);

    if (BalancedFactor(p) == 2 && BalancedFactor(p->lchild) == 1)
    {
        return LLRotation(p);
    }
    else if (BalancedFactor(p) == 2 && BalancedFactor(p->lchild) == -1)
    {
        return LRRotation(p);
    }
    else if (BalancedFactor(p) == -2 && BalancedFactor(p->lchild) == -1)
    {
        return RRRotation(p);
    }
    else if (BalancedFactor(p) == -2 && BalancedFactor(p->lchild) == 1)
    {
        return RLRotation(p);
    }

    return p;
}

int main()
{
    root = Insert(root, 10);
    Insert(root, 5);
    Insert(root, 2);

    return 0;
}