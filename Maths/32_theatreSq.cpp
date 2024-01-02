/*
1 A
Theatre Square
https://codeforces.com/problemset/problem/1/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m,a;
    cin>>n>>m>>a;

    unsigned long long val=ceil((double)m/a)*ceil((double)n/a);

    cout<<val;

    return 0;
}