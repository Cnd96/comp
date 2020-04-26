//https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/social-networking-graph/
#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;
vector<int> arr[100003];
bool visi[100003];
int dis[100003];
int temp;
int tempRes;
bool cal;
void bfs(int roo)
{
    queue<int> que;
    que.push(roo);
    dis[roo] = 0;
    visi[roo] = true;
    cal = false;
    tempRes = 0;

    while (!que.empty())
    {
        int curr = que.front();
        que.pop();

        for (int i = 0; i < arr[curr].size(); i++)
        {
            if (!visi[arr[curr][i]])
            {
                if (dis[curr] == temp)
                    tempRes++;

                que.push(arr[curr][i]);
                visi[arr[curr][i]] = true;
                dis[arr[curr][i]] = dis[curr] + 1;
            }
        }
        if (dis[curr] == (temp + 1))
            break;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int t;
    // cin >> t;
    // for (int tt = 1; tt <= t; tt++)
    // {
    int n, m, a, b, que;
    long long res = 1;
    bool resul = true;
    cin >> n >> m;
    for (int i = 0; i < 100003; i++)
    {
        arr[i].clear();
    }

    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    cin >> que;
    for (int i = 0; i < que; i++)
    {
        cin >> a >> temp;
        for (int i = 0; i < 100003; i++)
        {
            visi[i] = false;
            dis[i] = 0;
        }
        temp--;
        bfs(a);
        cout << tempRes << " "
             << "\n";
    }

    // }
    return 0;
}
