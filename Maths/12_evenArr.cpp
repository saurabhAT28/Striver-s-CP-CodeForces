/*
1367 B
Even Array
https://codeforces.com/problemset/problem/1367/B
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

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        int odd=0,even=0;

        for(int i=0;i<n;i++){
            if(i%2!=arr[i]%2){
                if(arr[i]&1)
                    odd++;
                else 
                    even++;
            }
        }

        if(odd!=even)
            cout<<-1;
        else 
            cout<<odd;
        
        cout<<"\n";
    }

    return 0;
}