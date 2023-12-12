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

    int t;
    ll c,sum;
    cin>>t;
    while(t--){
        cin>>c>>sum;

        c=min(c,sum);

        ll t=sum/c;
        ll extra=sum%c;
        ll tot=c-extra;

        cout<<(t*t*tot)+(extra*(t+1)*(t+1))<<"\n";
    }

    return 0;
}