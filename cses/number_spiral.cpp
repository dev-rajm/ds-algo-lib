#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  ll row, col;
  cin >> row >> col;
  if(row >= col) {
    if(row & 1) {
      cout << (row - 1)*(row-1) + col;
    } else {
      cout << (row*row) - col + 1;
    }
  } else {
    if(col & 1) {
      cout << (col*col) - row + 1;
    } else {
      cout << (col - 1)*(col - 1) + row;
    }
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
