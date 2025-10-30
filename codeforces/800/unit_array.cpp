#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  int pone=0, mone=0;
  for(int i=0; i<n; i++) {
    int b;
    cin >> b;
    if(b == 1) pone++;
    else mone++;
  }

  int ans = 0, sum = pone - mone;

  if(sum < 0) {
    ans += (-sum + 1) / 2;
    mone -= ans;
  }

  if(mone & 1) {
    ans += 1;
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
