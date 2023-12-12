/*
1328 A
Divisibility Problem
https://codeforces.com/problemset/problem/1328/A
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

    int t,a,b;
    cin>>t;
    while(t--){
        cin>>a>>b;

        int rem=a%b;
        
        if(rem==0)
            cout<<0<<"\n";
        else 
            cout<<b-rem<<"\n";
    }

    return 0;
}