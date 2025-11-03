#include <iostream>
using namespace std;

void solve() {
  char c;
  cin >> c;

  if (c >= 'a' && c <= 'z')
    cout << (char)(c - 32);
  else
    cout << (char)(c + 32);
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
