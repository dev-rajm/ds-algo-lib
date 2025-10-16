#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, i, bcount;
  string s;
  cin >> n >> s;

  bcount = 0;
  for(i=0; i<n; ++i) {
    if(s[i] == '#') {
      ++bcount;
    }
  }
  
  int ecell = 0;
  for(int i=0; i<n; ++i) {
    if(s[i] == '.') {
      ++ecell;
      if(ecell == 3) {
        cout << "2\n";
        return;
      }
    } else {
      ecell = 0;
    }
  }
  cout << n-bcount << "\n"; 
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
