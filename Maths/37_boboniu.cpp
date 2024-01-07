/*
1395 A
Boboniu Likes to Color Balls
https://codeforces.com/problemset/problem/1395/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--)
    {
        ll r, g, b, w;
        cin >> r >> g >> b >> w;

        ll cnt = 0;
        if (r % 2)
            cnt++;
        if (g % 2)
            cnt++;
        if (b % 2)
            cnt++;
        if (w % 2)
            cnt++;
        if (cnt <= 1)
        {
            cout << "Yes" << '\n';
            continue;
        }

        if (r > 0 && g > 0 && b > 0)
        {
            r--;
            g--;
            b--;
            w += 3;
        }
        cnt = 0;
        if (r % 2)
            cnt++;
        if (g % 2)
            cnt++;
        if (b % 2)
            cnt++;
        if (w % 2)
            cnt++;
        if (cnt <= 1)
        {
            cout << "Yes" << '\n';
            continue;
        }
        cout << "No" << '\n';
    }

    return 0;
}