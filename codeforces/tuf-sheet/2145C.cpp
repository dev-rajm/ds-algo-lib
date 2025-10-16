#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;

  int totalA = 0, totalB = 0;
  for (char c : s) {
    if (c == 'a')
      totalA++;
    else
      totalB++;
  }

  int target = totalA - totalB;
  if (target == 0) {
    cout << "0\n";
    return;
  }

  vector<int> diff(n + 1, 0);
  for (int i = 1; i <= n; i++) {
    diff[i] = diff[i - 1] + (s[i - 1] == 'a' ? 1 : -1);
  }

  unordered_map<int, int> mp;
  int ans = n + 1;
  mp[0] = 0;

  for (int i = 1; i <= n; i++) {
    int needed = diff[i] - target;
    if (mp.find(needed) != mp.end()) {
      int len = i - mp[needed];
      ans = min(ans, len);
    }

    mp[diff[i]] = i;
  }

  if (ans == n + 1)
    ans = n;
  else if (ans == n)
    cout << "-1\n";
  else
    cout << ans << "\n";
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
