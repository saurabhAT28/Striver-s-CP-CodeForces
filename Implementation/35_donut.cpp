/*
1373 A
Donut Shps
https://codeforces.com/problemset/problem/1373/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;

        int x1=-1,x2=-1;

        if(a<c)
            x1=1;
        if(a*b>c)
            x2=b;
        
        cout<<x1<<" "<<x2<<"\n";

    }

    return 0;
}