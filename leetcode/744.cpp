#include <bits/stdc++.h>
using namespace std;

// T.C => O(n)
char nextGreatestLetter(vector<char> &letters, char target)
{
    char ans = letters[0];
    for (char ch : letters)
    {
        if (ch > target)
        {
            ans = ch;
            break;
        }
    }

    return ans;
}

// T.C => O(log n)
char optimizedNextGreatestLetter(vector<char> &letters, char target)
{
    int l = 0, h = letters.size();
    while (l < h)
    {
        int mid = l + (h - l) / 2;
        if (letters[mid] > target)
            h = mid;
        else
            l = mid + 1;
    }

    return letters[l % letters.size()];
}

int main()
{
    int tt;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        char target;
        cin >> target;
        vector<char> arr(n);
        for (char &x : arr)
            cin >> x;

        cout << optimizedNextGreatestLetter(arr, target) << "\n";
    }

    return 0;
}