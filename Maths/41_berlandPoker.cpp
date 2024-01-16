/*
1359 A
Berland Poker
https://codeforces.com/problemset/problem/1359/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,n,m,k;
    cin>>t;
    while(t--){
        cin>>n>>m>>k;
        int jokers=min(m,(n/k));
        int left=m-jokers;
        left=ceil((double)left/(k-1));
        cout<<jokers-left<<"\n";
    }

    return 0;
}