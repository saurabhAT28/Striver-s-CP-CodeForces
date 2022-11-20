/*
268 B
Buttons
https://codeforces.com/problemset/problem/268/B
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;

    ll ans=n*(n-1)*(n+1)/6+n;

    cout<<ans;

    return 0;
}