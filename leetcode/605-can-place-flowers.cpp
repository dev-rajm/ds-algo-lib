#include <bits/stdc++.h>
using namespace std;

bool canPlaceFlowers(vector<int> &flowerbed, int n)
{
    int i;
    if (n == 0)
        return true;
    for (i = 0; i < flowerbed.size(); i++)
    {
        if (flowerbed[i] == 0 &&
            (i == 0 || flowerbed[i - 1] == 0) &&
            (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0))
        {
            flowerbed[i] = 1; // place a flower
            n--;
            if (n == 0)
                return true;
        }
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    for (int test = 0; test < t; test++)
    {
        int size;
        int n;
        cin >> size >> n;
        vector<int> vs(size);
        for (int i = 0; i < size; i++)
        {
            cin >> vs[i];
        }

        bool result = canPlaceFlowers(vs, n);

        cout << result << "\n";
    }
}