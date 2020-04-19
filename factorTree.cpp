#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int arr[100005];
void DFS(vector<int> v[],
         bool vis[],
         int x,
         int y,
         vector<int> stack)
{
    stack.push_back(x);
    if (x == y)
    {
        unsigned long long num = 1;

        for (int j = 0; j < stack.size(); j++)
        {
            num *= arr[stack[j]];
        }
        int cnt = 0;
        for (unsigned long long  i = 1; i <= sqrt(num); i++)
        {
            if (num % i == 0)
            {
                if (num / i == i)
                    cnt++;

                else 
                    cnt = cnt + 2;
            }
        }
        cout <<cnt << "\n";
        return;
    }
    vis[x] = true;

    int flag = 0;
    if (!v[x].empty())
    {
        for (int j = 0; j < v[x].size(); j++)
        {
            if (vis[v[x][j]] == false)
            {
                DFS(v, vis, v[x][j], y, stack);
                flag = 1;
            }
        }
    }
    if (flag == 0)
    {

        stack.pop_back();
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
        int n, a, b, q;
        cin >> n;
        vector<int> vec[n + 1], ss;

        bool vis[n + 2];

        for (int i = 0; i < n - 1; i++)
        {
            cin >> a >> b;
            vec[a].push_back(b);
            vec[b].push_back(a);
        }
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        cin >> q;
        for (int i = 0; i < q; i++)
        {
            cin >> a >> b;
            memset(vis, false, sizeof(vis));
            ss.clear();
            DFS(vec, vis, a, b, ss);
        }
    }
    return 0;
}


// 2
// 6
// 1 2
// 1 3
// 2 4
// 2 5
// 3 6
// 2 6 4 3 5 8
// 6
// 1 4
// 2 2
// 4 3
// 4 5
// 1 5
// 4 6
// 5
// 1 2
// 1 3
// 2 4
// 2 5
// 6 13 9 11 5
// 2
// 1 4
// 2 2