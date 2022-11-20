/*
476 A
Dreamoon and Stairs
https://codeforces.com/problemset/problem/476/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int ans;
    int n,m;

    cin>>n>>m;

    if(m>n)
        ans=-1;
    else{
        if(n%2==0)
            ans=n/2;
        else
            ans=n/2+1;
        
        while(ans%m){
            ans++;
        }
    }

    cout<<ans;

    return 0;
}