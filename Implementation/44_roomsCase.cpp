/*
1244 B
Rooms and Staircases
https://codeforces.com/problemset/problem/1244/B
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t, n;
    ll arr[1001];

    cin >> t;
    while (t--)
    {
        string s;

        cin >> n >> s;
        ll ans = n;

        if (s[0] == '1' || s[n - 1] == '1')
            ans = n * 2;
        else
        {
            bool flag = false;
            ll left = 0, right = 0;

            for (ll i = 0; i < n; i++)
            {
                if (s[i] == '1')
                {
                    flag = true;
                    left = i;
                    break;
                }
            }
            ll i = -1;
            for (ll j = n - 1; j >= 0; j--)
            {
                i++;
                if (s[j] == '1')
                {
                    flag = true;
                    right = i;
                    break;
                }
            }
            if (flag)
                ans = 2 * (n - min(left, right));
        }

        cout << ans << "\n";
    }

    return 0;
}

/*
4
5
00100
8
00000000
5
11111
3
110

*/
