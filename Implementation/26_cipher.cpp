/*
1095 A
Repeating Cipher
https://codeforces.com/problemset/problem/1095/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    string s;

    cin>>n>>s;

    int j=2;
    for(int i=0;i<n;i++){
        cout<<s.at(i);
        i+=j-1;
        j++;
    }

    return 0;
}