/**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void printVector(vector<int> v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << ' ';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, k;
    cin >> n >> k;
    vector<int> drink(k + 1);
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        drink[temp]++;
    }
    int take = n / 2 + (n & 1);
    int cnt = 0;
    for (int i = 1; i <= k; i++)
    {

        if (drink[i] / 2)
        {
            cnt += drink[i] / 2;
        }
    }

    cnt = min(cnt, take);

    cout << 2 * cnt + (take - cnt);

    return 0;
}