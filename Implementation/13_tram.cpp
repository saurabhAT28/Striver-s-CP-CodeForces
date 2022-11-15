/*
116 A
Tram
https://codeforces.com/problemset/problem/116/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,exit,enter;
    int maxPas=0,curPas=0;
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>exit>>enter;

        curPas-=exit;
        curPas+=enter;

        maxPas=max(maxPas,curPas);
    }

    cout<<maxPas;

    return 0;
}