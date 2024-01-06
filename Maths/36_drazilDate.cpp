/*
515 A
Drazil and Date
https://codeforces.com/problemset/problem/515/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll a,b,s;
    cin>>a>>b>>s;

    ll steps=abs(a)+abs(b);

    bool flag=false;
    if(steps<=s){
        if((s-steps)%2==0)
            flag=true;
    }

    if(flag)
        cout<<"Yes\n";
    else 
        cout<<"No\n";

    return 0;
}