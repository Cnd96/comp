#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        int n, k, p, a;
        cin >> n >> k >> p;

        long long pdata[n][k+1];

        for (int i = 0; i < n; i++)
        {
            pdata[i][0]=0;
            for (int j = 1; j <= k; j++)
            {
                cin >> a;
                pdata[i][j] = a + pdata[i][j - 1];
            }
        }
        long long jdata[n+1][p+1];
        for (int i = 0; i < n+1; i++)
        {
            for (int j = 0; j < p+1; j++)
            {
                jdata[i][j]=0;
            }
        }
        
        
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= p; j++)
            {
               int temp=j;
               if(k<j)temp=k;
                for (int l = 0; l <= temp; l++)
                {
                     jdata[i][j]=max(jdata[i][j],pdata[i-1][l]+jdata[i-1][j-l]);
                }
            }
        }
        cout << "Case #" << tt << ": "<<jdata[n][p]<< "\n";
    }
    return 0;
}