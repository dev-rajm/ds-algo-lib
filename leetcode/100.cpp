#include <bits/stdc++.h>
#include "../headers/tree.h"
using namespace std;

bool isSameTree(Node* p, Node* q) {
  if(!p && !q) return true;
  if(!p || !q) return false;
  if(p->data != q->data) return false;

  return isSameTree(p->lchild, q->lchild) && isSameTree(p->rchild, q->rchild);
}

int main() {
  int tc;
  cin >> tc;
  while(tc--) {
    int m,n;
    cin >> m >> n;
    vector<int> t1(m), t2(n);
    for(int i=0; i<m; i++) {
      cin >> t1[i];
    }
    for(int i=0; i<n; i++) {
      cin >> t2[i];
    }

    Node *root1 = create(t1);
    Node *root2 = create(t2);

    cout << isSameTree(root1, root2) << "\n";
  }
}
