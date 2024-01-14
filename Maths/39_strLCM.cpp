/*
1473 B
String LCM
https://codeforces.com/problemset/problem/1473/B
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int g;

string solve(string s,string t)
{
    int n = t.length() / g;
    string temp = "";

    while (n--)
    {
        temp += s;
    }

    return temp;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    string s1, s2;
    cin >> t;
    while (t--)
    {
        cin >> s1 >> s2;
        g = __gcd(s1.length(), s2.length());

        string t1 = solve(s1,s2);
        string t2 = solve(s2,s1);

        if (t1 == t2)
            cout << t1 << "\n";
        else
            cout << -1 << "\n";
    }

    return 0;
}