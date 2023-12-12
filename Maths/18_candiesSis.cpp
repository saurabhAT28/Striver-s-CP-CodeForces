/*
1335 A
Candies and Two Sister
https://codeforces.com/problemset/problem/1335/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    double x;
    ll ans;
    cin >> t;
    while (t--)
    {
        cin >> x;
        ll ans = ceil((x / 2) - 1);
        cout << ans << endl;
    }

    return 0;
}

/*
6
7
1
2
3
2000000000
763243547
*/