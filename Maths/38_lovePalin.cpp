/*
688 B
Lovely Palindrome
https://codeforces.com/problemset/problem/688/B
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s,temp;
    cin>>s;

    temp=s;

    reverse(temp.begin(),temp.end());

    cout<<s+temp;

    return 0;
}