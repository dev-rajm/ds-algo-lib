#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  int s1, s2, s3, s4;
  cin >> s1 >> s2 >> s3 >> s4;
  int mx1 = max({s1, s2, s3, s4});
  int mx2;
  if(mx1 == s1) {
    mx2 = max({s2, s3, s4});
  } else if(mx1 == s2) {
    mx2 = max({s1, s3, s4});
  } else if(mx1 == s3) {
    mx2 = max({s1, s2, s4});
  } else {
    mx2 = max({s1, s2, s3});
  }
  int w1 = max(s1, s2);
  int w2 = max(s3, s4);

  int wm1, wm2;
  if(w1 > w2) {
    wm1 = w1;
    wm2 = w2;
  } else {
    wm1 = w2;
    wm2 = w1;
  }

  if(wm1 == mx1 && wm2 == mx2) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
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
