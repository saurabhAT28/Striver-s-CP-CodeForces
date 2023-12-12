/*
1389 A
LCM Problem
https://codeforces.com/problemset/problem/1389/A
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

    ll t,r,l;
    cin>>t;
    while(t--){
        ll x=0,y=0;
        cin>>l>>r;
        if(l*2<=r){
            x=l;
            y=l*2;
        }
        else{
            x=-1;
            y=-1;
        }
        cout<<x<<" "<<y<<"\n";
    }

    return 0;
}