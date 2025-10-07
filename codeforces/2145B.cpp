#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;

  if(n==k) {
    cout << string(n, '-') << "\n";
    return;
  }

  int top=0, bottom=0, both=0;
  for(char c:s) {
    if(c=='0')
      top++;
    else if(c=='1')
      bottom++;
    else
     both++;
  }

  int maxTop=top+both;
  int maxBottom=bottom+both;
  
  for(int i=1; i<=n; i++) {
    if((i <= top) || (i > (n-bottom)))
      cout << '-';
    else if((i <= maxTop) || (i > (n-maxBottom)))
      cout << '?';
    else
     cout << '+';
  }
  cout << "\n";
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  int tc;
  cin >> tc;
  while (tc--) {
    solve();
  }

  return 0;
}
