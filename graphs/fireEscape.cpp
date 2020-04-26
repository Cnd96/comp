// https://www.codechef.com/problems/FIRESC
#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;
vector<int> arr[100003];
// int arr2[100003];
bool visi[100003];
int temp;
void dfs(int i)
{
    visi[i] = true;
    temp++;
    for (int j = 0; j < arr[i].size(); j++)
    {
        if (visi[arr[i][j]] == false)
        {
            dfs(arr[i][j]);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        int n, m, a, b,cCount=0;
        long long res=1;
        bool resul = true;
        cin >> n >> m;
        for (int i = 0; i < 100003; i++)
        {
            arr[i].clear();
            visi[i] = false;
        }

        for (int i = 0; i < m; i++)
        {
            cin >> a >> b;
            arr[a].push_back(b);
            arr[b].push_back(a);
        }
        for (int i = 1; i <= n; i++)
        {
            if (visi[i] == false)
            {
                temp=0;
                dfs(i);
                res*=temp;
                res%=1000000007;
                cCount++;
            }
        }
        cout <<cCount<<" "<<res<< "\n";
        
    }
    return 0;
}