/*
1360 A
Minimal Square
https://codeforces.com/problemset/problem/1360/A
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

        if(a>b)
            swap(a,b);
        
        a=max(a*2,b);

        cout<<a*a<<"\n";

    }

    return 0;
}