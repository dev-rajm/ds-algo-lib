#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  string s;
  cin >> s;
  int n=s.size();
  int y=0;
  for(int i=0; i<n; i++) {
    if(s[i] == 'Y') {
      y++;
    }
  }
  if(y > 1) {
    cout << "NO\n";
  } else {
    cout << "YES\n";
  }
}

int32_t main() {
   ios::sync_with_stdio(false);
   cin.tie(0);

   int tc;
   cin >> tc;
   while(tc--) {
       solve();
   }

   return 0;
}
