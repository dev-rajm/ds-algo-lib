#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int p[n];
  for(int i=0; i<n; i++) {
    cin >> p[i];
  }
  string s;
  cin >> s;

  int a=0, b=0;
  while(p[a] != 1) a++;
  while(p[b] != n) b++;
  if(s[0] == '1' || s[n-1] == '1' || s[a] == '1' || s[b] == '1') {
    cout << "-1\n";
    return;
  }

  a++, b++;
  vector<pair<int, int>> ans = {
    {1, a}, {1, b}, {a, n}, {b, n}, {min(a,b), max(a,b)}
  };
  cout << "5\n";
  for(auto &[x, y] : ans) {
    cout << x << " " << y << "\n";
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
