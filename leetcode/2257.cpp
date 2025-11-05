#include <bits/stdc++.h>
using namespace std;

int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
  vector<vector<char>> g(m, vector<char>(n, 'U'));
  for(auto &pos:guards) {
    g[pos[0]][pos[1]] = 'G';
  }
  for(auto &pos:walls) {
    g[pos[0]][pos[1]] = 'W';
  }

  for(int i=0; i<m; i++) {
    for(int j=0; j<n; j++) {
      if(g[i][j] == 'G') {
        // top
        for(int k=i-1; k>=0 && g[k][j] != 'W' && g[k][j] != 'G'; k--) {
          g[k][j] = 'V';
        }
        // left
        for(int k=j-1; k>=0 && g[i][k] != 'W' && g[i][k] != 'G'; k--) {
          g[i][k] = 'V';
        }
        // right
        for(int k=j+1; k<n && g[i][k] != 'W' && g[i][k] != 'G'; k++) {
          g[i][k] = 'V';
        }
        // bottom
        for(int k=i+1; k<m && g[k][j] != 'W' && g[k][j] != 'G'; k++) {
          g[k][j] = 'V';
        }
      }
    }
  }

  int count = 0;
  for(int i=0; i<m; i++) {
    for(int j=0; j<n; j++) {
      if(g[i][j]=='U')
        count++;
    }
  }

  return count;
}

int main() {
  int tc;
  cin >> tc;
  while(tc--) {
    int m,n;
    int gs, ws;
    cin >> m >> n >> gs >> ws;
    vector<vector<int>> g, w;
    for(int i=0; i<gs; i++) {
      int rg, cg;
      cin >> rg >> cg;
      g.push_back({rg, cg});
    }
    for(int i=0; i<ws; i++) {
      int rw, cw;
      cin >> rw >> cw;
      w.push_back({rw, cw});
    }

    cout << countUnguarded(m, n, g, w) << "\n";
  }
}
