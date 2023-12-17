/*
1266 A
Competitive Programmer
https://codeforces.com/problemset/problem/1266/A
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
        string s;
        cin >> s;
        n = s.length();
        int zero = 0, even = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            int temp = s[i] - '0';
            sum += temp;
            if (temp == 0)
            {
                zero++;
            }
            if (temp % 2 == 0)
            {
                even++;
            }
        }
        if ((sum % 3 == 0 && zero > 0) && even >= 2)
        {
            cout << "red\n";
        }
        else
        {
            cout << "cyan\n";
        }
    }

    return 0;
}
