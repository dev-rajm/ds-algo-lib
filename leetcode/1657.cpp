#include <bits/stdc++.h>
using namespace std;

bool closeStrings(string word1, string word2)
{
    if (word1.size() != word2.size())
    {
        return false;
    }

    unordered_map<char, int> mpp1;
    unordered_map<char, int> mpp2;

    for (char ch : word1)
    {
        mpp1[ch]++;
    }
    for (char ch : word2)
    {
        mpp2[ch]++;
    }

    set<char> st1;
    set<char> st2;

    for (auto it = mpp1.begin(); it != mpp1.end(); it++)
    {
        st1.insert(it->first);
    }
    for (auto it = mpp2.begin(); it != mpp2.end(); it++)
    {
        st2.insert(it->first);
    }

    if (st1 != st2)
    {
        return false;
    }

    vector<int> ls1;
    vector<int> ls2;

    for (auto it = mpp1.begin(); it != mpp1.end(); it++)
    {
        ls1.push_back(it->second);
    }
    for (auto it = mpp2.begin(); it != mpp2.end(); it++)
    {
        ls2.push_back(it->second);
    }

    sort(ls1.begin(), ls1.end());
    sort(ls2.begin(), ls2.end());

    return ls1 == ls2;
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        string word1;
        string word2;
        cin >> word1 >> word2;

        cout << closeStrings(word1, word2) << endl;
    }
}