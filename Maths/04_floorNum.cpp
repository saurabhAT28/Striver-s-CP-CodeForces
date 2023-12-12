/*
1426 A
Floor Number
https://codeforces.com/problemset/problem/1426/A
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

    int t,n,x;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;

        int c=2,ans=1;

        while(c<n){
            c+=x;
            ans++;
        }

        cout<<ans<<"\n";
    }

    return 0;
}