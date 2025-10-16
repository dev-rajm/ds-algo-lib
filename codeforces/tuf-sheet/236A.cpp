#include <bits/stdc++.h>
using namespace std;

// T.C => O(log N)
// S.C => O(N)
int main()
{
    string s;
    cin >> s;
    unordered_set<char> st(s.begin(), s.end());

    cout << (st.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");

    return 0;
}