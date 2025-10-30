#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  int count = 0, ans = 0;
  for(int i=0; i<n; i++) {
    int b;
    cin >> b;
    if(b == 0) {
      count += 1;
      ans = max(count, ans);
    } else {
      count = 0;
    }
  }

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
