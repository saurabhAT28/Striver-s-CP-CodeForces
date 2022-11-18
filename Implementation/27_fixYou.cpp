/**/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        char arr[101][101];

        int n,m;
        cin>>n>>m;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
            }
        }

        int ans=0;
        for(int i=0;i<n-1;i++){
            if(arr[i][m-1]!='D')
                ans++;
        }

        for(int i=0;i<m-1;i++){
            if(arr[n-1][i]!='R')
                ans++;
        }

        cout<<ans<<"\n";
    }

    return 0;
}