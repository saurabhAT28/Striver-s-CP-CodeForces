/*
1266 B
Dice Tower
https://codeforces.com/problemset/problem/1266/B
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void printVector(vector<int>v){
    int n=v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<' ';
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,x;
    cin>>t;
    while(t--){
        cin>>x;

        ll r=x%14;
        if(x>14 && r>0 && r<7)
            cout<<"YES\n";
        else 
            cout<<"NO\n";
    }

    return 0;
}