/*
1352 A
Sum of Round Numbers
https://codeforces.com/problemset/problem/1352/A

*/
 
#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
void printVector(vector<int>v){
    int n=v.size();
    cout<<n<<endl;
    for(int i=0;i<n;i++){
        cout<<v[i]<<' ';
    }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll t,n,r,a;
    cin>>t;
    while(t--){
        vector<int>v;
        cin>>n;
 
        r=1;
 
        while(n!=0){
            r*=10;
            a=n%r;
            n-=a;
 
            if(a!=0)
                v.push_back(a);
        }
        printVector(v);
        cout<<endl;
    }
 
    return 0;
}
 
/*
5
5009
7
9876
10000
10
 
*/
