#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, sum;
  cin >> n;
  sum = 0;
  for(int i=1; i<=n-1; i++) {
    int e;
    cin >> e;
    sum += e;
  }

  cout << sum * -1 << "\n";
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
