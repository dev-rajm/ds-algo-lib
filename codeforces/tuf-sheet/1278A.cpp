#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nline "\n"
#define pb push_back
#define all(x) (x).begin(), (x).end()

bool checkPassword(string p, string h)
{
    if (h.size() < p.size())
        return false;

    vector<int> freqP(26, 0);
    vector<int> freqH(26, 0);

    for (char ch : p)
        freqP[ch - 'a']++;

    // first window
    for (int i = 0; i < p.size(); i++)
        freqH[h[i] - 'a']++;

    if (freqP == freqH)
        return true;

    for (int i = p.size(); i < h.size(); i++)
    {
        freqH[h[i] - 'a']++;
        freqH[h[i - p.size()] - 'a']--;
        if (freqH == freqP)
            return true;
    }

    return false;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll tt;
    cin >> tt;
    string p, h;

    while (tt--)
    {
        cin >> p >> h;

        cout << (checkPassword(p, h) ? "YES\n" : "NO\n");
    }
    return 0;
}