#include <bits/stdc++.h>
using namespace std;

void solve() {
  int k;
  cin >> k;
  int total_min = 21 * 60 + k;
  int hh = (total_min / 60) % 24;
  int mm = (total_min - hh * 60) % 60;
  if (hh < 10) {
    cout << "0";
  }
  cout << hh << ":";
  if (mm < 10) {
    cout << "0";
  }
  cout << mm;
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
