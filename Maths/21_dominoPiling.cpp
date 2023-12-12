/*
50 A
Domino Piling
https://codeforces.com/problemset/problem/50/A
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

    int m,n;

    cin>>m>>n;

    cout<<m*n/2;
    

    return 0;
}