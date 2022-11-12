/*
263 A
Beautiful Matrix
https://codeforces.com/problemset/problem/263/A
*/


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int arr[5][5];
    int ans;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
            if(arr[i][j]==1)
            ans=abs(2-i)+abs(j-2);
        }
    }

    cout<<ans;

    return 0;
}