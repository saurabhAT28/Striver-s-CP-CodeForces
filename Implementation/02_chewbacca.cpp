/*
514 A
Chewbaсca and Number
https://codeforces.com/contest/514/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;

    int n=s.length();

    for(int i=0;i<n;i++){
        if(s[i]>'4')
            s[i]='9'-s[i]+'0';
    }

    if(s[0]=='0')
        s[0]='9';
    cout<<s;

    return 0;
}