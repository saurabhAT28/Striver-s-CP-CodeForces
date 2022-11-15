/*
977 A
Wrong Substraction
https://codeforces.com/problemset/problem/977/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;

    int rem=0;

    while(k--){
        rem=n%10;
        if(rem)
            n--;
        else
            n/=10;
    }

    cout<<n;

    return 0;
}