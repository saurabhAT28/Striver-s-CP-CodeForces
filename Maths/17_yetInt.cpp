/*
1409 A
Yet Another Two Integer Problem
https://codeforces.com/problemset/problem/1409/A
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

    int t,a,b,ans,n;
    cin>>t;
    while(t--){
        cin>>a>>b;

        if(a>b)
            swap(a,b);
        
        n=b-a;
        ans=n/10;
        if(n%10)
            ans++;
        
        cout<<ans<<"\n";
    }

    return 0;
}