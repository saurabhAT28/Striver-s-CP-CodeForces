/*
1107 B
Digital Root
https://codeforces.com/problemset/problem/1107/B
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

    ll t,x,k;
    cin>>t;
    while(t--){
        cin>>x>>k;

        cout<<((x-1)*9)+k<<"\n";
    }

    return 0;
}