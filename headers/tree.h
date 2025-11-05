#include <bits/stdc++.h>
using namespace std;

#ifndef TREE_H
#define TREE_H

struct Node {
  struct Node *lchild;
  int data;
  struct Node *rchild;
  Node(int val) : data(val), lchild(nullptr), rchild(nullptr) {}
};

Node *create(vector<int> &arr) {
  if (arr.empty())
    return nullptr;

  Node *root = new Node(arr[0]);
  queue<Node *> q;
  q.push(root);

  int i = 1;
  while (!q.empty() && i < arr.size()) {
    Node *p = q.front();
    q.pop();

    if (i < arr.size()) {
      p->lchild = new Node(arr[i++]);
      q.push(p->lchild);
    }
    if (i < arr.size()) {
      p->rchild = new Node(arr[i++]);
      q.push(p->rchild);
    }
  }
  return root;
}

#endif // TREE_H
