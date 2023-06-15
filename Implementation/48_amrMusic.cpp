/*
507 A
Amr and Music
https://codeforces.com/problemset/problem/507/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m,k,x;

    cin>>m>>k;

    vector<pair<int,int>>arr(m);

    for(int i=0;i<m;i++){
        cin >>x;
        arr[i]={x,i+1};
    }
        
    sort(arr.begin(),arr.end());

    int cnt=0;
    for(int i=0;i<m;i++){
        if(arr[i].first>k)
            break;
        cnt++;
        k-=arr[i].first;
    }

    cout<<cnt<<endl;
    for(int i=0;i<cnt;i++)
        cout<<arr[i].second<<" ";


    return 0;
}