/*
610 A
Pasha and Stick
https://codeforces.com/problemset/problem/610/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;

    if(n%2)
        cout<<0<<"\n";
    else 
        cout<<(n/2-1)/2<<"\n";

    return 0;
}