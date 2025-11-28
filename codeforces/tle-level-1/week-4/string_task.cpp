#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  string s;
  cin >> s;
  transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
    return static_cast<unsigned char>(tolower(c));
  });
  for (char ch : s) {
    if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
        ch != 'y') {
      cout << '.' << ch;
    } else {
      continue;
    }
  }
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
