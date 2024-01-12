/*
1613 C
Poisoned Dagger
https://codeforces.com/problemset/problem/1613/C
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, n, h;
    cin >> t;
    while (t--)
    {
        cin >> n >> h;
        vector<int> v(n);

        for (int i = 0; i < n; i++)
            cin >> v[i];

        ll low = 1, high = h;
        while (low <= high)
        {
            ll mid = low + (high - low) / 2;
            ll damage = 0;

            for (int i = 0; i < n-1; i++)
            {
                if (v[i] + mid > v[i + 1])
                    damage += v[i + 1] - v[i];
                else
                    damage += mid;
            }

            damage += mid;

            if (damage >= h)
                high = mid - 1;
            else
                low = mid + 1;
        }

        cout << low << "\n";
    }

    return 0;
}