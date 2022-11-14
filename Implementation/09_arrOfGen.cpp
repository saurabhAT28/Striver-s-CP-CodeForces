/*
144 A
Arrival of General
https://codeforces.com/problemset/problem/144/A
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

    int x;
    

    int maxIdx=0,minIdx=0;
    int maxVal=0,minVal=101;

    for(int i=0;i<n;i++){
        cin>>x;

        if(i==0){
            maxIdx=0;
            minIdx=0;
            maxVal=x;
            minVal=x;
        }

        if(x>maxVal){
            maxVal=x;
            maxIdx=i;
        }
        else if(x<=minVal){
            minVal=x;
            minIdx=i;
        }
    }

    if(maxIdx>minIdx)
        cout<<maxIdx+(n-1-minIdx)-1;
    else 
        cout<<maxIdx+(n-1-minIdx);

    return 0;
}