/*
1374 A
Required Remainder
https://codeforces.com/problemset/problem/1374/A
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

    ll t,x,y,n,ans;
    cin>>t;
    while(t--){
        cin>>x>>y>>n;
        ans=0;

        ans=n-n%x+y;

        if(ans<=n)
            cout<<ans;
        else 
            cout<<(n-n%x-x+y);
        
        cout<<"\n";
    }

    return 0;
}