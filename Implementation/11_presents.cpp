/*
136 A
Presents
https://codeforces.com/problemset/problem/136/A
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

    int n,x;
    cin>>n;

    vector<int>v(101,0);

    for(int i=1;i<n+1;i++){
        cin>>x;
        v[x]=i;
    }

    for(int i=1;i<n+1;i++){
        cout<<v[i]<<" ";
    }

    return 0;
}