#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<long long> v(n);
  for(int i=0; i<n; i++) {
    cin >> v[i];
  }

  long long c=1;
  vector<long long> ans(n);
  ans[0]=1;
  for(int i=1; i<n; i++) {
    long long index = i+1;
    long long diff = v[i] - v[i-1];
    if(index==diff) {
      ans[i] = ++c;
    }
    else {
      ans[i] = ans[i-diff];
    }
  }
  for(int i=0; i<n; i++) {
    cout << ans[i] << " ";
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
