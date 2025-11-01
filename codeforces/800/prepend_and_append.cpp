#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  string s;
  cin >> n >> s;
  
  int ans = n;
  int left=0, right=n-1;
  while(left < right) {
    if(s[left] == s[right]) {
      break;
    }
    else {
      ans -= 2;
    }
    left++;
    right--;
  }

  cout << ans << "\n";
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
