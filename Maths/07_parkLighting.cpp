/*
1358 A
Park Lighting
https://codeforces.com/problemset/problem/1358/A
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

    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;

        int ans=(n*m+1)/2;

        cout<<ans<<"\n";

    }

    return 0;
}