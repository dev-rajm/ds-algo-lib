#include <bits/stdc++.h>
using namespace std;

int kthElement(vector<int> &arr1, vector<int>& arr2, int n, int m, int k){
  int i, j;
  int counter = 0;
  i=j=0;

  while(i < n && j < m) {
    int curr;
    if(arr1[i] < arr2[j]) {
      curr = arr1[i++];
      counter++;
    }
    else {
      curr = arr2[j++];
      counter++;
    }
    if(counter == k) {
      return curr;
    }
  }
  while(i<n) {
    if(counter == k) {
      return arr1[i];
    }
    i++, counter++;
  }
  while(j<m) {
    if(counter == k) {
      return arr2[j];
    }
    j++, counter++;
  }
  return -1;
}

int32_t main() {
   ios::sync_with_stdio(false);
   cin.tie(0);

   int n, m, k;
   cin >> n;
   vector<int> arr1(n);
   for(int i=0; i<n; i++) {
     cin >> arr1[i];
   }

   cin >> m;
   vector<int> arr2(m);
   for(int i=0; i<m; i++) {
     cin >> arr2[i];
   }

   cin >> k;

   cout << kthElement(arr1, arr2, n, m, k) << "\n";

   return 0;
}
