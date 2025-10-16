#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, x;
  cin >> n >> x;

  int prev=0, ans=0;
  for(int i=0; i<n; i++) {
    int a;
    cin >> a;
    ans = max(ans, a-prev);
    prev = a;
  }
  ans = max(ans, 2*(x-prev));
  cout << ans << "\n";
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
