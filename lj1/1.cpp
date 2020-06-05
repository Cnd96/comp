#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;
#define mod 1000000007
#define ll long long
#define lim 26
const double PI = acos(-1.0);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        int n,m,a,b;
        cin>>n>>m;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        for (int i = 0; i < m; i++)
        {
            cin>>a>>b;
        }
        
        

        pair<int, int> arrPos[n];
        for (int i = 0; i < n; i++)
        {
            arrPos[i].first = arr[i];
            arrPos[i].second = i;
        }
        sort(arrPos, arrPos + n);
        vector<bool> vis(n, false);

        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            if (vis[i] || arrPos[i].second == i)
                continue;

            int cycle_size = 0;
            int j = i;
            while (!vis[j])
            {
                vis[j] = 1;
                cycle_size++;
                j = arrPos[j].second;
            }
            if (cycle_size > 0)
            {
                ans += (cycle_size - 1);
            }
        }

        cout << ans<< "\n";
    }
    return 0;
}