#include <iostream>
#include <string>
using namespace std;

void solve() {
  string f1, s1, f2, s2;
  cin >> f1 >> s1;
  cin >> f2 >> s2;

  if(s1 == s2) {
    cout << "ARE Brothers";
  }
  else {
    cout << "NOT";
  }
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
