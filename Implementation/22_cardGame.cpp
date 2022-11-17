/*
1097 A
Gennady and a Card Game
https://codeforces.com/problemset/problem/1097/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string str,x;
    cin>>str;

    bool flag=false;
    for(int i=1;i<=5;i++){
        cin>>x;

        if(x[0]==str[0] || x[1]==str[1])
            flag=true;
    }

    if(flag)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}