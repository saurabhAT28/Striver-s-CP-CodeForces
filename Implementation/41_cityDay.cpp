/*
1199 A
City Day
https://codeforces.com/problemset/problem/1199/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,x,y;
    cin>>n>>x>>y;

    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    bool flag;

    for(int i=0;i<n;i++){
        flag=false;
        // Left
        for(int j=i-1;j>=i-x && !flag && j>=0 ;j--){
            if(arr[j]<=arr[i]){
                flag=true;
                break;
            }
        }

        // Right
        for(int j=i+1;j<=i+y && !flag && j<n ;j++){
            if(arr[j]<=arr[i]){
                flag=true;
                break;
            }
        }

        if(!flag){
            cout<<++i;
            break;
        }
    }
    

    return 0;
}