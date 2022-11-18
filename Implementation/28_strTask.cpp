/*
118 A
String Task
https://codeforces.com/problemset/problem/118/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void printVector(vector<int>v){
    int n=v.size();
    for(int i=0;i<n;i++){
        cout<<v[i]<<' ';
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s,t;
    cin>>s;

    int n=s.length();
    transform(s.begin(),s.end(),s.begin(),::tolower);

    for(int i=0;i<n;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o'|| s[i]=='u' || s[i]=='y')
            continue;
        t+='.';
        t+=s[i];
    }

    cout<<t;

    return 0;
}