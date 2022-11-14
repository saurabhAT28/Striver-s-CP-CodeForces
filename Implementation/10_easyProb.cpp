/*
1030 A
In search of an easy Problem
https://codeforces.com/problemset/problem/1030/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int x,flag=0;

    for(int i=0;i<n;i++){
        cin>>x;

        if(x==1)
            flag=1;
    }

    if(flag)
        cout<<"HARD";
    else
        cout<<"EASY";

    return 0;
}