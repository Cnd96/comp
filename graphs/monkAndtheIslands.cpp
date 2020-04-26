// https://www.hackerearth.com/practice/algorithms/graphs/breadth-first-search/practice-problems/algorithm/monk-and-the-islands/
#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;
vector<int> arr[10003];
bool visi[10003];
int dis[10003];

void bfs(int roo){
    queue<int> que;
    que.push(roo);
    dis[roo]=0;
    visi[roo]=true;

    while (!que.empty())
    {
        int curr=que.front();
        que.pop();

        for (int i = 0; i < arr[curr].size(); i++)
        {
            if(!visi[arr[curr][i]]){
                que.push(arr[curr][i]);
                visi[arr[curr][i]]=true;
                dis[arr[curr][i]]=dis[curr]+1;
            }
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
        for (int i = 0; i < 10003; i++)
        {
            arr[i].clear();
            visi[i] = false;
            dis[i]=0;
        }

        for (int i = 0; i < m; i++)
        {
            cin >> a >> b;
            arr[a].push_back(b);
            arr[b].push_back(a);
        }
        bfs(1);
        cout <<dis[n]<< "\n";
        
    }
    return 0;
}