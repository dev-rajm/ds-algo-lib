#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

void solve() {
  string s;
  cin >> s;
  vector<string> ls;
  for(char ch: s) {
    string word = "";
    if(ch != ' ') {
      word += ch;
    } else {
      ls.push_back(word);
      word = "";
    }
  }
  reverse(ls.begin(), ls.end());
  for(auto w:s) {
    cout << w;
  }
  cout << "\n";
  // string result = "";
  // for(int i=0; i<ls.size(); i++) {
  //   result += ls[i];
  //   if(i < ls.size() - 1) result += ' ';
  // }
  // cout << result << "\n";
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
