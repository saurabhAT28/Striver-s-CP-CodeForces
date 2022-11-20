/*
1139 B
Chocolates
https://codeforces.com/problemset/problem/1139/B
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;

    ll arr[n];

    for(ll i=0;i<n;i++)
        cin>>arr[i];
    
    ll ans=arr[n-1];

    for(ll i=n-2;i>=0;i--){
        ll x=min(arr[i+1]-1,arr[i]);
        if(x<=-1)
            x=0;
        ans+=x;
        arr[i]=x;
    }

    cout<<ans;

    return 0;
}