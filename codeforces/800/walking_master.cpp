#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long a, b, c, d;
  cin >> a >> b >> c >> d;

  if((b <= d) && (c <= a+d-b)) {
      cout << (d-b) + (a+d-b) - c << "\n";
  }
  else {
    cout << "-1\n";
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
