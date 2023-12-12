/*
1371 A
Magical Sticks
https://codeforces.com/problemset/problem/1371/A
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

    int t,n,ans;
    cin>>t;
    while(t--){
        cin>>n;

        ans=n/2;

        if(n&1)
            ans++;
        
        cout<<ans<<"\n";
    }

    return 0;
}