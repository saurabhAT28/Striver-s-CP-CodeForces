/*
281 A
Word Capitalization
https://codeforces.com/problemset/problem/281/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin>>str;

    if('a'<=str[0] && str[0]<='z')
        str[0]=str[0]-'a'+'A';
    
    cout<<str;

    return 0;
}