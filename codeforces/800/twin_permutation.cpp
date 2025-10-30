#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  for(int i=0; i<n; i++) {
    int b;
    cin >> b;
    cout << n + 1 - b << " ";
  }
  cout << "\n";
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
