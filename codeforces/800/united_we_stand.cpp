#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);
  for(int i=0; i<n; i++) {
    cin >> a[i];
  }
  int ma = *max_element(a.begin(), a.end());
  int mi = *min_element(a.begin(), a.end());

  if(ma == mi) {
    cout << -1 << "\n";
    return;
  }

  vector<int>b, c;
  for(int i=0; i<n; i++) {
    if(a[i] < ma) {
      b.push_back(a[i]);
    }
    else {
      c.push_back(a[i]);
    }
  }

  cout << b.size() << " " << c.size() << "\n";
  for(int i:b) {
    cout << i << " ";
  }
  cout << "\n";
  for(int i:c) {
    cout << i << " ";
  }
  cout << "\n";
}

int32_t main() {
   ios::sync_with_stdio(false);
   cin.tie(0);

   int tc;
   cin >> tc;
   while(tc--) {
       solve();
   }

   return 0;
}
