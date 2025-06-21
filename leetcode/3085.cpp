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
    for (int target = 1; target <= *max_element(freqs.begin(), freqs.end()); ++target)
    {
        int del = 0;
        for (int f : freqs)
        {
            if (f < target)
                del += f;
            else if (f > target + k)
                del += f - (target + k);
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