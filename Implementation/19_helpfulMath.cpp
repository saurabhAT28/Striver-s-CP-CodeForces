/*
339 A
Helpful Math
https://codeforces.com/problemset/problem/339/A
*/
 
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s;
    cin>>s;
 
    int arr[101];
    int cnt=0;
    int n=s.length();
 
    for(int i=0;i<n;i++){
        if(s[i]!='+'){
            arr[cnt]=s[i]-'0';
            cnt++;
        }
    }
 
    sort(arr,arr+cnt);
 
    for(int i=0;i<cnt;i++){
        cout<<arr[i];
        if(i==cnt-1)
            break;
        cout<<"+";
    }
 
    return 0;
}