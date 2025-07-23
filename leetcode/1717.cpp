#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

int maximumGain(string s, int x, int y)
{
    int n = s.size();
    int score = 0;
    int top_s, bot_s;
    string top, bot;
    if (y > x)
    {
        top = "ba";
        top_s = y;
        bot = "ab";
        bot_s = x;
    }
    else
    {
        top = "ab";
        top_s = x;
        bot = "ba";
        bot_s = y;
    }

    string s1 = "";
    for (char ch : s)
    {
        if (!s1.empty() && ch == top[1] && s1.back() == top[0])
        {
            score += top_s;
            s1.pop_back();
        }
        else
        {
            s1 += ch;
        }
    }

    string s2 = "";
    for (char ch : s1)
    {
        if (!s2.empty() && ch == bot[1] && s2.back() == bot[0])
        {
            score += bot_s;
            s2.pop_back();
        }
        else
        {
            s2 += ch;
        }
    }

    return score;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll tt;
    cin >> tt;

    while (tt--)
    {
        int x, y;
        string s;
        cin >> x >> y >> s;

        cout << maximumGain(s, x, y) << nline;
    }
    return 0;
}