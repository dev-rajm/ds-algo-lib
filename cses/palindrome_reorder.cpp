#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  string s;
  cin >> s;
  map<char, int> mpp;
  for(char ch:s) {
    mpp[ch]++;
  }
  int odds = 0;
  for(const auto &[ch, cnt]:mpp) {
    if((cnt%2) == 1) {
      odds++;
    }
  }
  if(odds > 1) {
    cout << "NO SOLUTION";
  } else {
    // output
  }
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
