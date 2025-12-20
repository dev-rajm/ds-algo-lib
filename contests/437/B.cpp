#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  int h, w, n;
  cin >> h >> w >> n;
  vector<vector<int>> v(h, vector<int>(w));
  for(int i=0; i<h; i++) {
    for(int j=0; j<w; j++) {
      cin >> v[i][j];
    }
  }
  vector<int> ls(h, 0);
  while(n--) {
    int b;
    cin >> b;
    for(int i=0; i<h; i++) {
      for(int j=0; j<w; j++) {
        if(b == v[i][j]) {
          ls[i]++;
        }
      }
    }
  }
  cout << *max_element(ls.begin(), ls.end());
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
