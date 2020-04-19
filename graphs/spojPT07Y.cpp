// https://www.spoj.com/problems/PT07Y/
#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

vector<int> arr[10005];
bool visi[10005];
void dfs(int i)
{
    visi[i] = true;
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
    int n, m,a,b;
    cin >> n >> m;

    for (int i = 0; i < 10005; i++)
    {
        arr[i].clear();
    }
    memset(visi, false, sizeof(visi));

    for (int i = 1; i <= m; i++)
    {
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    if ((n - 1) == m)
    {
        dfs(1);
        bool oky = true;
        for (int i = 1; i <= n; i++)
        {
            if (visi[i] == false)
            {
                oky = false;
                cout << "NO" << endl;
                break;
            }
        }
        if (oky)
            cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
