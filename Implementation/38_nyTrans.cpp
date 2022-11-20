/*
500 A
New Year Transportation
https://codeforces.com/problemset/problem/500/A?f0a28=1
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m,x;
    cin>>n>>m;
    bool flag=false;

    ll ans=0;

    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }

    while(ans<m-1){
        ans+=a[ans];
    }

    if(ans==m-1)
        cout<<"YES";
    else 
        cout<<"NO";

    return 0;
}