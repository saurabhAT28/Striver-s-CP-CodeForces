/*
1278 A
Shuffle Hashing
https://codeforces.com/problemset/problem/1278/A
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
        string s1,s2;
        cin>>s1>>s2;

        ll n1=s1.length();
        ll n2=s2.length();

        sort(s1.begin(),s1.end());

        ll i=0;
        bool flag=false;

        while(i+n1<=n2){
            string s3=s2.substr(i,n1);
            sort(s3.begin(),s3.end());
            
            if(s1==s3){
                flag=true;
                break;
            }
            i++;
            // cout<<"Finish";
        }
        

        if(flag)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<"\n";

    }

    return 0;
}

/*

5
abacaba
zyxaabcaabkjh
onetwothree
threetwoone
one
zzonneyy
one
none
twenty
ten
*/