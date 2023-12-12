/*
959 A
Mahmoud and Ehab and the even-odd game
https://codeforces.com/problemset/problem/959/
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

    int n;
    cin>>n;

    if(n&1)
        cout<<"Ehab";
    else 
        cout<<"Mahmoud";

    return 0;
}