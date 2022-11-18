/*
1300 B
Assigning to Classes
https://codeforces.com/problemset/problem/1300/B
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;

        ll x=n;
        n*=2;

        int arr[n];

        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        sort(arr,arr+n);
        
        cout<<abs(arr[x]-arr[x-1])<<"\n";

    }

    return 0;
}