/*
702 A
Maximum Increase
https://codeforces.com/problemset/problem/702/A
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

    cin>>x;
    int ans=1,curLen=1;
    int prev=x;

    for(int i=1;i<n;i++){
        cin>>x;

        if(x>prev){
            curLen++;
        }
        else{
            ans=max(ans,curLen);
            curLen=1;
        }
        prev=x;
    }

    ans=max(ans,curLen);

    cout<<ans;

    return 0;
}