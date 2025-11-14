#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m));
  for(int i=0; i<n; i++) {
    for(int j=0; j<m; j++) {
      cin >> a[i][j];
    }
  }

  int count = 0;
  int idx = 0;
  for(int i=0; i<n; i++) {
    int cnt = 0;
    for(int j=0; j<m; j++) {
      if(a[i][j] == 1) {
        cnt++;
      }
    }
    if(cnt > count) {
      count = cnt;
      idx = i;
    }
  }

  cout << (count != 0 ? idx : -1);
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
