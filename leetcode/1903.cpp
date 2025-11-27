#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  string s;
  cin >> s;
  int n=s.size();
  int index = -1;
  for(int i=n-1; i>=0; i--) {
    int num = s[i] - '0';
    if(num > 0 && (num % 2) == 1) {
      index = i;
      break;
    }
  }
  if(index == -1) {
    cout << "\n";
  } else {
    cout << s.substr(0, index+1) << "\n";
  }
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
