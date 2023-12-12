/*
1294 A
Collecting Coins
https://codeforces.com/problemset/problem/1294/A
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

    int t,a,b,c,n;
    int sum;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>n;
        sum=a+b+c+n;

        if(sum%3!=0 || sum/3<a || sum/3<b || sum/3<c)
            cout<<"NO\n";
        else
            cout<<"YES\n";
    }

    return 0;
}