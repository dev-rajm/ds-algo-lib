#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  ll n;
  cin >> n;
  ll nsum = (n * (n + 1) / 2);
  if ((nsum % 2) == 1) {
    cout << "NO\n";
    return;
  }
  cout << "YES\n";
  vector<int> v1, v2;
  if ((n % 4) == 0) {
    int l = 1, r = n;
    while (l < r) {
      v1.push_back(l);
      v1.push_back(r);
      v2.push_back(l + 1);
      v2.push_back(r - 1);
      l += 2, r -= 2;
    }
  } else {
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    int l = 4, r = n;
    while (l < r) {
      v1.push_back(l);
      v1.push_back(r);
      v2.push_back(l + 1);
      v2.push_back(r - 1);
      l += 2, r -= 2;
    }
  }

  cout << v1.size() << "\n";
  for(int x:v1) {
    cout << x << " ";
  }
  cout << "\n" << v2.size() << "\n";
  for(int x:v2) {
    cout << x << " ";
  }
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
