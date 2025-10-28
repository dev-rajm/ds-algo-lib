#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> v(n);
  bool hasEn = false, hasOd = false;
  for(int i=0; i<n; i++) {
    cin >> v[i];
    if((v[i]%2) == 0) {
      hasEn = true;
    }
    else {
      hasOd = true;
    }
  }

  if(hasOd && hasEn) {
    sort(v.begin(), v.end());
  }

  for(int x:v) {
    cout << x << " ";
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
