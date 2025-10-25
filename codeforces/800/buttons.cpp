#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long a, b, c;
  cin >> a >> b >> c;
  
  if((c%2) == 0) {
    cout << ((a>b) ? "First" : "Second") << "\n";
  } else {
    cout << ((b>a) ? "Second" : "First") << "\n";
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
