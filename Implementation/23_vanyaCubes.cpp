/*
492 A
Vanya and Cubes
https://codeforces.com/problemset/problem/492/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int i=0,level=0,j=0;

    while(n>0){
        level++;
        i=j+level;
        n-=i;
        j=i;
        if(n<0)
            level--;
    }

    cout<<level;

    return 0;
}