#include <bits/stdc++.h>
using namespace std;

void solve()
{
  int n, k, ans, last, i;
  string s;
  cin >> n >> k >> s;

  ans = 0, last = -100000;
  for (i = 0; i < n; i++)
  {
    if (s[i] == '0')
      continue;
    if (i - last >= k)
    {
      ans++;
    }
    last = i;
  }

  cout << ans << "\n";
}

int32_t main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);

  int tc;
  cin >> tc;
  while (tc--)
  {
    solve();
  }

  return 0;
}
