#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n, num, first;
  cin >> n;

  cin >> first;

  for(int i=1; i<n; i++) {
    cin >> num;
    if(num > n) {
      cout << "NO\n";
      return;
    }
  }

  cout << (first == 1 ? "YES" : "NO") << "\n";
}

int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tt;
    cin >> tt;
    while (tt--)
    {
        solve();
    }
    return 0;
}
