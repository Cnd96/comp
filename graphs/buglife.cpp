// https://www.spoj.com/status/BUGLIFE,chance96/
#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;
vector<int> arr[2005];
int arr2[2005];
bool visi[2005];

bool dfs(int i, int g)
{
    visi[i] = true;
    arr2[i] = g;
    for (int j = 0; j < arr[i].size(); j++)
    {
        if (visi[arr[i][j]] == false)
        {
            bool res = dfs(arr[i][j], arr2[i] ^ 1);
            if (!res)
            {
                return false;
            }
        }
        else if (arr2[i] == arr2[arr[i][j]])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        int n, m, a, b;
        bool resul = true;
        cin >> n >> m;
        for (int i = 0; i < 2005; i++)
        {
            arr[i].clear();
            arr2[i] = 0;
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
                bool res = dfs(i, 0);
                if (!res)
                {
                    resul=false;
                    break;
                }
            }
        }


        cout << "Scenario #" << tt << ":"<< "\n";
        if(resul)
          cout << "No suspicious bugs found!"<< "\n";
        else
          cout << "Suspicious bugs found!"<< "\n";
        
    }
    return 0;
}