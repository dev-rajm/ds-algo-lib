#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n, e, o, p, ne;
  cin >> n;

  e = o = p = ne = 0;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if(x>0) p++;
    if(x<0) ne++;
    if((x%2)==0) e++;
    if((x%2)==1) ne++;
  }

  cout << "Even: " << e << "\n";
  cout << "Odd: " << o << "\n";
  cout << "Positive: " << p << "\n";
  cout << "Negative: " << ne << "\n";
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
