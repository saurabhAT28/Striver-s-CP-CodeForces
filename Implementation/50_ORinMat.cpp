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

     int n, m;
    cin >> m >> n;
    bool B[m][n], A[m][n], C[m][n];
    for (int i = 0; i < m; ++i)
    {
    	for (int j = 0; j < n; ++j)
    	{
    		cin >> B[i][j];
    		A[i][j] = 1;
    		C[i][j] = 0;
    	}
    }
    
    for (int i = 0; i < m; ++i)
    {
    	for (int j = 0; j < n; ++j)
    	{
    		if (B[i][j] == 0)
    		{
    			for (int k = 0; k < n; ++k)
    			{
    				A[i][k] = 0;
    			}
    			for (int k = 0; k < m; ++k)
    			{
    				A[k][j] = 0;
    			}

    		}
    	}
    }
    
    for (int i = 0; i < m; ++i)
    {
    	for (int j = 0; j < n; ++j)
    	{
    		if (A[i][j] )
    		{
    			for (int k = 0; k < n; ++k)
    			{
    				C[i][k] = 1;
    			}
    			for (int k = 0; k < m; ++k)
    			{
    				C[k][j] = 1;
    			}

    		}
    	}
    }
    for (int i = 0; i < m; ++i)
    {
    	for (int j = 0; j < n; ++j)
    	{
    		if (C[i][j] != B[i][j])
    		{
    			cout <<"NO\n";
    			return 0;
    		}
    	}
    }

    cout <<"YES\n";
    for (int i = 0; i < m; ++i)
    {
    	for (int j = 0; j < n; ++j)
    	{
    		cout << A[i][j] <<" ";
    	}
    	cout << "\n";
    }
    

    return 0;
}