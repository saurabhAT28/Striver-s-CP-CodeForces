/*
1141 A
Game 23
https://codeforces.com/problemset/problem/1141/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m;
    cin>>n>>m;

    int ans=0;
    if(n==m)
        ans=0;
    else if(m%n!=0)
        ans=-1;
    else{
        ll d=m/n;
        while(d%2==0){
            d/=2;
            ans++;
        }
        while(d%3==0){
            d/=3;
            ans++;
        }

        if(d!=1)
            ans=-1;
    }

    cout<<ans;

    return 0;
}