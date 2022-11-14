/*
785 A
Anton and Polyhedrons
https://codeforces.com/problemset/problem/785/A
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    unordered_map<string,int>m;

    m["Tetrahedron"]=4;
    m["Cube"]=6;
    m["Octahedron"]=8;
    m["Dodecahedron"]=12;
    m["Icosahedron"]=20;

    int t;
    cin>>t;
    int ans=0;
    while(t--){
        string s;
        cin>>s;
        ans+=m[s];
    }

    cout<<ans;

    return 0;
}