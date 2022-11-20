/*
131 A
cAPS LOCK
https://codeforces.com/problemset/problem/131/A?f0a28=1
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str;
    cin>>str;

    int n=str.length();
    bool flag=true;
    
    for(int i=1;i<n;i++){
        if(str[i]>=97){
            flag=false;
            break;
        }  
    }

    if(flag){
        for(int i=0;i<n;i++){
            if(str[i]>=97)
                str[i]-=32;
            else
                str[i]+=32;
        }
    }

    cout<<str;

    return 0;
}