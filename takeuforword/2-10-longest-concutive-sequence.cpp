#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

// T.C => O(n)
// S.C => O(1)
bool ls(vector<int> &v, int x)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        if (v[i] == x)
        {
            return true;
        }
    }
    return false;
}

// T.C => O(n^2)
// S.C => O(1)
int longestConsecutiveSequence(vector<int> &v)
{
    int len = 0, n = v.size();
    for (int i = 0; i < n; i++)
    {
        int x = v[i];
        int cnt = 1;
        while (ls(v, x + 1) == true)
        {
            x += 1;
            cnt += 1;
        }
        len = max(len, cnt);
    }
    return len;
}

// T.C => O(nlogn)
// S.C => O(1)
int longestConsecutiveSequence1(vector<int> &v)
{
    int n = v.size(), currCnt = 0, lastSmaller = INT_MIN, len = 1;
    sort(all(v));

    for (int i = 0; i < n; i++)
    {
        if (v[i] - 1 == lastSmaller)
        {
            currCnt += 1;
            lastSmaller = v[i];
        }
        else if (v[i] != lastSmaller)
        {
            currCnt = 1;
            lastSmaller = v[i];
        }
        len = max(len, currCnt);
    }
    return len;
}

// T.C => O(3n)
// S.C => O(n)
int longestConsecutiveSequence2(vector<int> &v)
{
    int n = v.size(), len = 1;
    unordered_set<int> st;
    for (int x : v)
        st.insert(x);

    for (auto it : st)
    {
        if (st.find(it - 1) == st.end())
        {
            int cnt = 1, x = it;
            while (st.find(x + 1) != st.end())
            {
                cnt += 1;
                x += 1;
            }
            len = max(len, cnt);
        }
    }
    return len;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for (int &x : v)
            cin >> x;

        cout << longestConsecutiveSequence1(v) << nline;
    }
    return 0;
}