/*
791 A
a bear and big brother
https://codeforces.com/problemset/problem/791/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b;
    cin>>a>>b;

    int cnt=0;

    while(a<=b){
        a*=3;
        b*=2;
        cnt++;
    }

    cout<<cnt;

    return 0;
}