// https://www.hackerearth.com/practice/algorithms/graphs/depth-first-search/practice-problems/algorithm/bishu-and-his-girlfriend/
#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

vector<int> arr[1005];
bool visi[1005];
bool isNeed[1005];
int dis[1005];
int q, tempQ;

void dfs(int i, int len)
{
    visi[i] = true;
    dis[i] = len;
    if (isNeed[i])
    {
        tempQ++;
    }
    if (tempQ >= q)
    {
        return;
    }
    for (int j = 0; j < arr[i].size(); j++)
    {
        if (visi[arr[i][j]] == false)
        {
            dfs(arr[i][j], (dis[i] + 1));
            if (tempQ >= q)
            {
                return;
            }
        }
    }
}

int main()
{
    int n, a, b,resIndex,res=INT_MAX;
    tempQ = 0;
    cin >> n;
    memset(visi, false, sizeof(visi));
    memset(isNeed, false, sizeof(isNeed));
    memset(dis, 0, sizeof(dis));

    for (int i = 1; i < n; i++)
    {
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    cin >> q;
    for (int i = 1; i <= q; i++)
    {
        cin >> a;
        isNeed[a] = true;
    }
    dfs(1, 0);

    for (int i = 1; i <= n; i++)
    {
        if(isNeed[i]){
            if(res>dis[i]){
                res=dis[i];
                resIndex=i;
            }
        }
    }

    cout<<resIndex<<endl;

    return 0;
}

