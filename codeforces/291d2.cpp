#include <bits/stdc++.h>
using namespace std;

int main()
{
    string num;
    cin >> num;
    for (int i = 0; i < num.size(); i++)
    {
        int digit = num[i] - '0';
        int inverted = 9 - digit;

        if (inverted < digit)
        {
            if (i == 0 && inverted == 0)
                continue;

            num[i] = inverted + '0';
        }
    }
    cout << num << endl;

    return 0;
}
