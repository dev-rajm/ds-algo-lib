#include <bits/stdc++.h>
using namespace std;

// type definations
typedef set<int> st;
typedef unordered_set<char> ustc;
typedef unordered_set<int> usti;

typedef vector<int> vi;
typedef vector<char> vc;

typedef stack<int> stk;

typedef map<int, int> mppii;
typedef unordered_map<int, int> umppii;

typedef queue<int> qi;
typedef priority_queue<int> pqi;

int lengthOfLongestSubstring(string s)
{
    ustc st;
    int maxVal = 0;
    int l = 0, r = 0;
    while (l <= r && r < s.size())
    {
        if (st.find(s[r]) == st.end())
        {
            st.insert(s[r]);
            int windowSize = r - l + 1;
            maxVal = max(maxVal, windowSize);
            r++;
        }
        else
        {
            auto it_begin = st.find(l);
            auto it_end = st.find(r);
            st.erase(it_begin, it_end);
            l = r;
        }
        r++;
    }
    return maxVal;
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        string s;
        cin >> s;
        cout << lengthOfLongestSubstring(s) << "\n";
    }

    return 0;
}