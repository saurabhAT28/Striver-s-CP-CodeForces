/*
1154 A
Restoring Three Numbers
https://codeforces.com/problemset/problem/1154/A
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

    int arr[4];
    for(int i=0;i<4;i++)
        cin>>arr[i];

    sort(arr,arr+4);

    for(int i=0;i<3;i++)
        cout<<arr[3]-arr[i]<<" ";

    return 0;
}