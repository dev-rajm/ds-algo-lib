#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, a;
  cin>>n>>a;
  int left=0, right=0;
  for(int i=0; i<n; i++) {
    int b;
    cin>>b;
    if(b<a) {
      left++;
    }
    else if(b>a) {
      right++;
    }
  }
  if(left > right) {
    cout << a-1 << "\n";
  } else {
    cout << a+1 << "\n";
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
