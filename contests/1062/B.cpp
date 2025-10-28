#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  string s, t;
  cin >> n >> s >> t;

  vector<int> H(26, 0);

  for(char c:s) {
    H[c - 'a']++;
  }

  for(char c:t) {
    H[c-'a']--;
  }

  for(int i=0; i<26; i++) {
    if(H[i] != 0) {
      cout << "NO\n";
      return;
    }
  }
  cout << "YES\n";
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
