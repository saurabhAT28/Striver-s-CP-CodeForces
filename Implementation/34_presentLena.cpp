/*
118 B
Presents from Lena
https://codeforces.com/problemset/problem/118/B
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    for(int i=-n;i<n+1;i++){
        int x=n-abs(i);
        for(int j=0;j<abs(i);j++)
            cout<<"  ";
        for(int j=0;j<x;j++)
            cout<<j<<" ";
        for(int j=x;j>0;j--)
            cout<<j<<" ";
        cout<<0<<"\n";
    }

    return 0;
}