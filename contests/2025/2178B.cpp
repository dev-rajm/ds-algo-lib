#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  string s;
  cin >> s;
  int n = s.size();
  int sc = 0;
  for (char ch : s) {
    if (ch == 's') {
      sc++;
    }
  }
  if (sc == n) {
    cout << 0 << "\n";
    return;
  }
  int opt = 0;
  for(int i=0; i<n; i+=2) {
    if(s[i] != 's') {
      s[i] = 's';
      opt++;
      if(s[i+1] == 's') {
        i++;
      }
    }
  }
  if(s[n-1] == 'u') opt++;
  cout << opt << "\n";
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
