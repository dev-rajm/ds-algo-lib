#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tt;
    cin >> tt;

    unordered_map<string, int> mpp = {
        {"Cube", 6},
        {"Tetrahedron", 4},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20}

    };

    int totalFaces = 0;
    while (tt--)
    {
        string s;
        cin >> s;

        totalFaces += mpp[s];
    }

    cout << totalFaces;

    return 0;
}