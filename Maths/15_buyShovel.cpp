/*
732 A
Buy a shovel
https://codeforces.com/problemset/problem/732/A
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

    int ans=0;
    ll price=0;

    int k,r;
    cin>>k>>r;

    while(1){
        if(price%10==0 && price!=0)
            break;
        if(price%10==r)
            break;

        ans++;
        price+=k;
    }

    cout<<ans;

    return 0;
}