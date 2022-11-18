/*
1430 C
Numbers onwhiteboard
https://codeforces.com/problemset/problem/1430/C
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n,x,y,z;
        cin>>n;

        priority_queue<ll>pq;

        for(ll i=0;i<n;i++){
            pq.push(i+1);
        }

        cout<<2<<"\n";
        while(pq.size()>1){
            x=pq.top();
            pq.pop();
            y=pq.top();
            pq.pop();

            cout<<x<<" "<<y<<"\n";

            z=x+y;
            if(z&1)
                z++;
            pq.push(z/2);
        }
    }

    return 0;
}