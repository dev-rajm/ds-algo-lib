#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);
  int mi_diff = INT_MAX;
  for(int i=0; i<n; i++) {
    cin >> a[i];
  }

  if(!is_sorted(a.begin(), a.end())) {
    cout << "0\n";
    return;
  }

  for(int i=1; i<n; i++) {
    mi_diff = min(mi_diff, a[i] - a[i-1]);
  }

  int ans = floor((double)mi_diff / (double)2) + 1; 

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
