/*
1117 B
Emotes
https://codeforces.com/problemset/problem/1117/
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

    ll n,m,k;

    cin>>n>>m>>k;

    ll arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    sort(arr,arr+n);

    ll r,x,y,z;

    r=m/(k+1);
    x=r*k*arr[n-1];
    y=r*arr[n-2];
    z=m%(k+1);
    z*=arr[n-1];

    cout<<x+y+z;


    return 0;
}