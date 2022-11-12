/*
151 A
Soft Drinking
https://codeforces.com/problemset/problem/151/A
*/


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int totDrk=k*l/nl;
    int slice=c*d;
    int salt=p/np;

    cout<<min({totDrk,slice,salt})/n;

    return 0;
}