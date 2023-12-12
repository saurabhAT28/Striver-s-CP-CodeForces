/*
1343 B
Balanced Array
https://codeforces.com/problemset/problem/1343/B
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

    ll n,sum1,sum2;

    while(t--){
        sum1=0;
        sum2=0;

        cin>>n;

        if(n%4==0){
            cout<<"YES\n";

            for(int i=2;i<=n;i+=2){
                cout<<i<<" ";
                sum1+=i;
            }
            for(int i=1;i<n-2;i+=2){
                cout<<i<<" ";
                sum2+=i;
            }
            cout<<sum1-sum2<<"\n";
        }
        else 
            cout<<"NO\n";

    }

    return 0;
}