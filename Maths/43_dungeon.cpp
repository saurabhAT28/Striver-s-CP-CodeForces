/*
1463 A
Dungeon
https://codeforces.com/problemset/problem/1463/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;

        int k=a+b+c;

        if(k%9==0){
            k/=9;
            if(a<k || b<k || c<k)
                cout<<"NO\n";
            else 
                cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }

    }

    return 0;
}