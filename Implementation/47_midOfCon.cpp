/*
1133 A
Middle of the Contest
https://codeforces.com/problemset/problem/1133/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int h1, m1, h2, m2;
    char c;

    cin >> h1 >> c >> m1;
    cin >> h2 >> c >> m2;

    // Converting hh:mm to minutes
    h1 = h1 * 60 + m1;
    h2 = h2 * 60 + m2;

    int h3 = (h1 + h2) / 2;

    int m = h3 % 60;
    int h = h3/60;

    if (h > 9 && m > 9)
    {
        cout << h << ":" << m;
    }
    else
    {
        // If hours are less than 10 then 0 is imp before hours
        if (h < 10)
            cout << 0;

        cout << h << ":";

        if (m < 10)
            cout << 0;

        cout << m;
    }

    return 0;
}