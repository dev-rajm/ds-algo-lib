#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  unordered_set<int> st;
  int b;
  for(int i=0; i<n; i++) {
    cin >> b;
    st.insert(b);
  }
  
  cout << st.size() << "\n";
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
