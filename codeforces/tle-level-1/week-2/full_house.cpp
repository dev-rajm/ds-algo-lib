#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a, b, c, d, e;
  cin >> a >> b >> c >> d >> e;
  unordered_map<int, int> ump;
  ump[a]++, ump[b]++, ump[c]++, ump[d]++, ump[e]++;
  if (ump.size() == 2 && ump.begin()->second <= 3) {
    cout << "Yes";
  } else {
    cout << "No";
  }
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
