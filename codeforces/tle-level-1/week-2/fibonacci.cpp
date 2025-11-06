#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int first=0, second=1, third;
  if(n==1)
    cout << "0";
  else if(n==2)
    cout << "1";
  else {
    while(n>2) {
      third = first+second;
      first = second;
      second = third;
      n--;
    }
    cout << third;
  }
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
