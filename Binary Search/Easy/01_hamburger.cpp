/*
371 C
Hamburger
https://codeforces.com/contest/371/problem/C
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll nb, ns, nc, pb, ps, pc, taka;
    string st;
    cin >> st;
    cin >> nb >> ns >> nc;
    cin >> pb >> ps >> pc;
    cin >> taka;

    ll b = 0, s = 0, c = 0;
    for (int i = 0; i < st.size(); i++)
    {
        if (st[i] == 'B')
            b++;
        else if (st[i] == 'S')
            s++;
        else
            c++;
    }

    ll l = 0, h = 1e15, ans = 0;

    while (l <= h)
    {
        ll mid = (l + h) / 2;

        ll x = max(0ll, b * mid - nb);
        ll y = max(0ll, s * mid - ns);
        ll z = max(0ll, c * mid - nc);

        ll cost = pb * x + ps * y + pc * z;

        if (cost > taka)
        {
            h = mid - 1;
        }
        else
        {
            ans = mid;
            l = mid + 1;
        }
    }
    cout << ans ;

    return 0;
}