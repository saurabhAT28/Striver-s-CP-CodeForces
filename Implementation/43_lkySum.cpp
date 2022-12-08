/*
109 A
Lucky Sum of Digits
https://codeforces.com/problemset/problem/109/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int seven=0,four=0;

    while(n>=0){
        if(n%7==0){
            seven=n/7;
            n=0;
            break;
        }
        four++;
        n-=4;
    }

    if(n==0){
        while(four--){
            cout<<"4";
        }
        while(seven--){
            cout<<"7";
        }
    }
    else{
        cout<<"-1";
    }

    return 0;
}