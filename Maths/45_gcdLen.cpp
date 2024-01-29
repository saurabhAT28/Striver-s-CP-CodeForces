/*
1511 B
GCD Length
https://codeforces.com/problemset/problem/1511/B
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int dp[10];
    dp[1]=1;
    for(int i=2;i<10;i++){
        dp[i]=dp[i-1]*10;
    }


    int t,a,b,c;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        int x=1,y=1,z=1;

        while(x<dp[c])
            x*=2;
        
        y=x;
        z=x;

        while(y<dp[a])
            y*=2;
        while(z<dp[b])
            z*=3;

        cout<<y<<" "<<z<<"\n";

    }

    return 0;
}