#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> v;
  int last = -1;
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if (i == 0) {
      v.push_back(a);
      last = a;
    } else {
      if (a >= last) {
        v.push_back(a);
      } else {
        v.push_back(1);
        v.push_back(a);
      }
      last = a;
    }
  }

  cout << v.size() << "\n";
  for (int i : v) {
    cout << i << " ";
  }
  cout << "\n";
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int tc;
  cin >> tc;
  while (tc--) {
    solve();
  }

  return 0;
}
