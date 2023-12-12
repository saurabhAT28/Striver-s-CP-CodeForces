/*
1337 A
A. Ichihime and Triangle
https://codeforces.com/problemset/problem/1337/A
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

    int t;
    ll a,b,c,d;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>d;
        cout<<b<<" "<<c<<" "<<c<<"\n";
    }

    return 0;
}