/*
1353 A
Most Unstable Array
https://codeforces.com/problemset/problem/1353/A
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

    ll t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;

        if(n==1)
            cout<<0;
        else if(n==2)
            cout<<k;
        else 
            cout<<2*k;
        
        cout<<"\n";
    }

    return 0;
}