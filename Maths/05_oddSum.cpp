/*
1296 A
A. Array with Odd Sum
https://codeforces.com/problemset/problem/1296/A
*/

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

    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        int sum = 0, odd = 0, even = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] & 1)
                odd++;
            else
                even++;
            sum += arr[i];
        }

        if (sum & 1)
            cout << "YES\n";
        else
        {
            if (odd != 0 && even != 0)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}