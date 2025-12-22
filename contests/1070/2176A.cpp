#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  int n;
  cin >> n;
  int a[n];
  for(int i=0; i<n; i++) {
    cin >> a[i];
  }

  int opts = 0;
  int last = 0;
  for(int i=1; i<n; i++) {
    if(a[last] > a[i]) {
      opts++;
    }
    else {
      last = i;
    }
  }

  cout << opts << "\n";
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
