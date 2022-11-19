/*
139 A
Petr and Book
https://codeforces.com/contest/139/problem/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;

    int arr[7];
    for(int i=0;i<7;i++)
        cin>>arr[i];
    
    int ans=0;
    int i=0;
    while(n>0){
        i%=7;
        n-=arr[i];
        i++;
    }
    
    cout<<i;

    return 0;
}

/*
100
15 20 20 15 10 30 45
*/