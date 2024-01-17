/*
1342 A
Road To Zero
https://codeforces.com/problemset/problem/1342/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll t,x,y,a,b;
    cin>>t;
    while(t--){
        cin>>x>>y>>a>>b;
        if(x>y)
            swap(x,y);
        
        ll ans1=x*a+y*a;
        ll ans2=(y-x)*a+x*b;

        cout<<min(ans1,ans2)<<"\n";
    }

    return 0;
}