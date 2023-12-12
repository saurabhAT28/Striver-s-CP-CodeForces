/**/

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

    ll x,y,z;
    cin>>x>>y>>z;

    ll ans=0;

    ll loan=0;
    ll i=x%z;
    ll j=y%z;

    ans+=(i+j)/z;
    if(ans>0)
        loan=z-max(i,j);
    
    ans+=x/z;
    ans+=y/z;
    
    cout<<ans<<" "<<loan;


    return 0;
}