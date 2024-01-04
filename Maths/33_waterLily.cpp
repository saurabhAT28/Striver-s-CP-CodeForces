/*
1199 B
Water Lily
https://codeforces.com/problemset/problem/1199/B
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double L, H;
    cin >> H >> L;

    cout << fixed << setprecision(7) << ((L * L) - (H * H)) / (2 * H);

    return 0;
}