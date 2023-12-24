/*
69 A
Young Physicist
https://codeforces.com/problemset/problem/69/A
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

    int n,x,y,z;
    int sumX=0,sumY=0,sumZ=0;

    cin>>n;
    while(n--){
        cin>>x>>y>>z;
        sumX+=x;
        sumY+=y;
        sumZ+=z;
    }

    if(sumX==0 && sumY==0 && sumZ==0)
        cout<<"YES";
    else 
        cout<<"NO";

    return 0;
}