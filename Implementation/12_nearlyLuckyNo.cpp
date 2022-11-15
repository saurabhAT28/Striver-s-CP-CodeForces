/*
110 A
Nearly Lucky Number
https://codeforces.com/problemset/problem/110/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;

    ll rem=0,cnt=0;

    while(n){
        rem=n%10;
        n/=10;

        if(rem==4 || rem==7)
            cnt++;
        
    }

    if(cnt!=4 && cnt!=7)
        cout<<"NO";
    else
        cout<<"YES";

    return 0;
}