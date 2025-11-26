#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  string s;
  cin >> s;
  int l=0;
  string t = "";
  for(char ch:s) {
    if(ch == '(') {
      if(l > 0) {
        t += ch;
      }
      l++;
    }
    else if(ch == ')') {
      l--;
      if(l > 0) {
        t += ch;
      }
    }
  }
  cout << t << "\n";
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
