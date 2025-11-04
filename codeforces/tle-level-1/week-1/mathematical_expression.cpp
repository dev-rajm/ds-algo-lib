#include <bits/stdc++.h>
using namespace std;

void solve() {
  int  A, B, C;
  char S, Q;
  cin >> A >> S >> B >> Q >> C;

  if(S=='+' && (A+B)!=C) {
    cout << A+B;
  }
  else if(S=='-' && (A-B)!=C) {
    cout << A-B;
  }
  else if(S=='*' && (A*B)!=C) {
    cout << A*B;
  }
  else {
    cout << "Yes";
  }
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
