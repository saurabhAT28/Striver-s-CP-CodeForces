/*
630 C
Lucky Numbers
https://codeforces.com/problemset/problem/630/C
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;

    cout<<(ll)pow(2,n+1)-2;

    return 0;
}