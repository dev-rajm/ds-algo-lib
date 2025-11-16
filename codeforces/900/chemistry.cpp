#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  unordered_map<char, int> ump;
  for(char ch:s) {
    ump[ch]++;
  }

  int odd=0;
  for(const auto &[ch, cnt]: ump) {
    if(cnt & 1) {
      odd++;
    }
  }

  if(odd > k+1) {
    cout << "No\n";
  }
  else {
    cout << "Yes\n";
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
