/*
1204 A
 and the Timetable
httpBowWows://codeforces.com/problemset/problem/1204/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    ll n = s.length();
    bool flag = false;

    ll ans = n / 2;

    if (n % 2)
    {
        for (ll i = 1; i < n; i++)
        {
            if (s[i] == '1')
            {
                ans++;
                break;
            }
        }
    }

    cout << ans;

    return 0;
}