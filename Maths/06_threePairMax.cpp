/*
1385 A
Three Paiewise Maximums
https://codeforces.com/problemset/problem/1385/A
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

    int t,x,y,z;
    cin>>t;
    while(t--){
        cin>>x>>y>>z;

        if(x>y)
            swap(x,y);
        if(x>z)
            swap(x,z);
        if(y>z)
            swap(y,z);
        
        if(y==z){
            cout<<"YES\n";
            cout<<x<<" "<<x<<" "<<z<<"\n";
        }
        else{
            cout<<"NO\n";
        }

    }

    return 0;
}