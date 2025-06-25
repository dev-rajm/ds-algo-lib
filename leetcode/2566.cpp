#include <bits/stdc++.h>
using namespace std;

int minMaxDifference(int num)
{
    string s = to_string(num);

    int firstNonNine = 0;
    int firstNonZero = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '9')
        {
            firstNonNine = i;
            break;
        }
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '0')
        {
            firstNonZero = i;
            break;
        }
    }

    string maxi = s, mini = s;
    replace(maxi.begin(), maxi.end(), (char)maxi[firstNonNine], '9');
    replace(mini.begin(), mini.end(), (char)mini[firstNonZero], '0');

    return stoi(maxi) - stoi(mini);
}

int main()
{
    int tt;
    cin >> tt;

    while (tt--)
    {
        int n;
        cin >> n;
        cout << minMaxDifference(n) << "\n";
    }
    return 0;
}