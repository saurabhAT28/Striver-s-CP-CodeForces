/*
1237 A
Balanced Rating Changes
https://codeforces.com/problemset/problem/1237/A
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

    int n;
    cin>>n;
    
    vector<int>v(n);

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    bool flag=false;
    for(int i=0;i<n;i++){
        if(v[i]%2==0){
            v[i]=v[i]/2;
        }
        else{
            float k=(double)v[i]/2;
            if(flag){
                v[i]=floor(k);
                flag=false;
            }
            else{
                v[i]=ceil(k);
                flag=true;
            }
        }
    }

    printVector(v);

    return 0;
}