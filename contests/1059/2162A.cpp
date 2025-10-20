#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, max_avg, num;
  cin >> n;

  max_avg = 0;
  for(int i=0; i<n; i++) {
    cin >> num;
    if(num > max_avg) {
      max_avg = num;
    }
  }

  cout << max_avg << "\n";
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
