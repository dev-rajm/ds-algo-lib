#include <bits/stdc++.h>
using namespace std;

int minimumDeletions(string word, int k)
{
    unordered_map<char, int> mpp;
    for (char ch : word)
        mpp[ch]++;

    vector<int> freqs;
    for (auto &[ch, cnt] : mpp)
        freqs.push_back(cnt);

    int miniDel = INT_MAX;
    for (int i = 1; i <= *max_element(freqs.begin(), freqs.end()); ++i)
    {
        int del = 0;
        for (int f : freqs)
        {
            if (f < i)
                del += f;
            else if (f > i + k)
                del += f - (i + k);
        }
        miniDel = min(miniDel, del);
    }

    return miniDel;
}

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        int k;
        string s;
        cin >> k >> s;

        cout << minimumDeletions(s, k) << "\n";
    }
    return 0;
}