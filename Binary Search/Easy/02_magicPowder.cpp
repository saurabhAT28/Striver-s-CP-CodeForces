/*
670 D1
Magic Powder
https://codeforces.com/contest/670/problem/D1
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, m;
    ll a[1001], b[1001];
    ll cnt = 0;

    cin >> n >> m;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    while (m >= 0)
    {
        
        for (int i = 0; i < n; i++)
        {
            if (b[i] >= a[i])
                b[i] -= a[i];
            else
            {
                m -= a[i] - b[i];
                b[i] = 0;
            }
        }

        if(m>=0)
            cnt++;
    }

    cout << cnt;

    return 0;
}