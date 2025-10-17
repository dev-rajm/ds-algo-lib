#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  if(n%3) {
    cout << "First\n";
  } else {
    cout << "Second\n";
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
