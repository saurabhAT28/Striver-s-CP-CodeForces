/*
617 A
Elephant
https://codeforces.com/problemset/problem/617/A
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
    cin>>t;
    
    int ans=t/5;

    if(t%5!=0)
        ans++;
    
    cout<<ans<<"\n";

    return 0;
}