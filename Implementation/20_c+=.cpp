/*
1368 A
C+=
https://codeforces.com/problemset/problem/1368/A
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
    while(t--){
        ll a,b,n;
        cin>>a>>b>>n;

        ll cnt=0,sum=0;

        while(sum<=n){
            if(a>b){
                b+=a;
                sum=b;
            }
            else{
                a+=b;
                sum=a;
            }
            cnt++;
        }

        cout<<cnt<<"\n";

    }

    return 0;
}