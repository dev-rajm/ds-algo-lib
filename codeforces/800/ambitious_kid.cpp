#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  int mi = INT_MAX;
  for(int i=0; i<n; i++) {
    int b;
    cin >> b;
    mi = min(mi, abs(b));
  }

  cout << mi;
}

int32_t main() {
   ios::sync_with_stdio(false);
   cin.tie(0);
  
   solve();
   
   return 0;
}
