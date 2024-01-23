/*
463 B
Caisa and Pylons
https://codeforces.com/problemset/problem/463/B
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n, energy = 0, prev = 0, res = 0;
    ll x;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        energy += prev - x;

        if (energy < 0)
        {
            res -= energy;
            energy = 0;
        }

        prev = x;
    }

    cout << res;

    return 0;
}