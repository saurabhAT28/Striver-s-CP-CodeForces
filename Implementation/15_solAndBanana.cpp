/*
546 A
Soldiers and Bananas
https://codeforces.com/problemset/problem/546/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll k,n,w;

    cin>>k>>n>>w;

    // ll sum=(w/2)*((2*k)+((w-1)*k));

    ll sum=0;
    for(int i=1;i<=w;i++){
        sum+=i*k;
    }

    if(sum<=n)
        cout<<0;
    else
        cout<<sum-n;

    return 0;
}