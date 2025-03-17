#include <bits/stdc++.h>
using namespace std;

string reversePrefix(string word, char ch)
{
    int index = -1;
    int n = word.size();
    for (int i = 0; i < n; i++)
    {
        if (word[i] == ch)
        {
            index = i;
            break;
        }
    }
    if (index == -1)
        return word;
    string s;
    for (int i = index; i >= 0; i--)
        s.push_back(word[i]);
    for (int i = index + 1; i < n; i++)
        s.push_back(word[i]);

    return s;
}

int main()
{
    string s = reversePrefix("adcbed", 'd');
    for (char ch : s)
    {
        cout << ch;
    }

    return 0;
}