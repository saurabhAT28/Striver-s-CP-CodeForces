/*
236A
A boy or Girl
https://codeforces.com/problemset/problem/236/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin>>str;

    unordered_map<char,int>m;

    int n=str.length();
    int cnt=0;

    for(int i=0;i<n;i++){
        if(m[str[i]]++==0)
            cnt++;
    }

    if(cnt&1)
        cout<<"IGNORE HIM!";
    else
        cout<<"CHAT WITH HER!";

    return 0;
}

/*wjmzbmr*/