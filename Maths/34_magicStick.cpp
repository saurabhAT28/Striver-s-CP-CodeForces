/*
1257 B
Magic Stick
https://codeforces.com/problemset/problem/1257/B
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    ll x,y;
    cin>>t;
    while(t--){
        cin>>x>>y;
        if(x==1 && y>1)
            cout<<"NO\n";
        else{
            if(x<=3 && y>3)
                cout<<"NO\n";
            else 
                cout<<"YES\n";
        }
    }

    return 0;
}