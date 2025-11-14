#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> &a, int n, int x) {
  int l = 0, h = n - 1;
  int ans = n;
  while (l <= h) {
    int mid = (l + h) / 2;
    if (a[mid] >= x) {
      ans = mid;
      h = mid - 1;
    } else {
      l = mid + 1;
    }
  }
  return ans;
}

void solve() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a[i][j];
    }
  }

  int count = 0;
  int idx = -1;
  for (int i = 0; i < n; i++) {
    int cnt = m - lowerBound(a[i], m, 1);
    if (cnt > count) {
      count = cnt;
      idx = i;
    }
  }

  cout << idx;
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
