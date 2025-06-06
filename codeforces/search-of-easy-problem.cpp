#include <bits/stdc++.h>
using namespace std;

// T.C => O(N)
// S.C => O(N)
int main()
{
    int n;
    cin >> n;
    unordered_set<int> st;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        st.insert(p);
    }
    cout << (st.find(1) != st.end() ? "HARD" : "EASY");

    return 0;
}