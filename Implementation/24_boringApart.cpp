/*
1433 A
Boring Apartments
https://codeforces.com/problemset/problem/1433/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int solve(int n){
    int tot=0;
    for(int i=1;i<=9;i++){
        int sum=0;
        for(int j=1;j<=4;j++){
            sum*=10;
            sum+=i;
            tot+=j;
            if(sum==n)
                return tot;
        }
    }
    return -1;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        cout<<solve(n)<<"\n";
    }

    return 0;
}