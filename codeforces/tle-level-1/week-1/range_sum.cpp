#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long l, r;
  cin >> l >> r;

  if(r<l) swap(r, l);

  long long sum  = ((r*(r+1))/2) - (((l-1)*l)/2);
  cout << sum << "\n";
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
