#include <bits/stdc++.h>
using namespace std;

typedef map<int, int> mii;
typedef unordered_map<int, int> umii;
typedef vector<int> vi;

vi frequencyCount(vi &arr)
{
    mii mpp;
    vi vs(arr.size());
    for (int num : arr)
        mpp[num]++;

    for (auto const &x : mpp)
        vs[x.first - 1] = x.second;

    return vs;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vi ans = frequencyCount(arr);
        for (int i = 0; i < n; i++)
            cout << ans[i] << " ";
        cout << "\n";
    }
}
