/*
1027 A
Palindromic Twist
https://codeforces.com/problemset/problem/1027/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string str;

        cin >> n >> str;
        bool flag = true;
        for (int i = 0; i < n / 2; i++)
        {
            int diff = abs(str[i] - str[n - i - 1]);

            if (!(diff==0 || diff==2))
            {
                flag = false;
                break;
            }
        }

        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}

/*
5
6
abccba
2
cf
4
adfa
8
abaazaba
2
ml
*/