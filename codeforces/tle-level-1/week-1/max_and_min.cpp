#include <iostream>
using namespace std;

void solve() {
  int A, B, C;
  cin>>A>>B>>C;
  
  int mi=A, ma=A;
  if(B < mi) mi = B;
  if(C < mi) mi = C;
  if(B > ma) ma = B;
  if(C > ma) ma = C;
  
  cout << mi << " " << ma;
}

int32_t main() {
  ios::sync_with_stdio(false);
  cin.tie(0);

  solve();

  return 0;
}
