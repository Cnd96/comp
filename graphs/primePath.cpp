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
vector<int> primes;

void bfs(int roo)
{
    queue<int> que;
    que.push(roo);
    dis[roo] = 0;
    visi[roo] = true;

    while (!que.empty())
    {
        int curr = que.front();
        que.pop();

        for (int i = 0; i < arr[curr].size(); i++)
        {
            if (!visi[arr[curr][i]])
            {
                que.push(arr[curr][i]);
                visi[arr[curr][i]] = true;
                dis[arr[curr][i]] = dis[curr] + 1;
            }
        }
    }
}

bool is_prime(int n)
{
    if (n == 1)
    {
        return false;
    }

    int i = 2;
    while (i * i <= n)
    {
        if (n % i == 0)
        {
            return false;
        }
        i += 1;
    }
    return true;
}

bool isMatch(int a, int b)
{
    int temp = 0;
    while (a > 0)
    {
        if ((a % 10) == (b % 10))
            temp++;

        a /= 10;
        b /= 10;
    }
    if (temp == 3)
        return true;

    return false;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for (int i = 0; i < 10003; i++)
    {
        arr[i].clear();
    }

    for (int i = 1000; i < 10000; i++)
    {
        if (is_prime(i))
            primes.push_back(i);
    }

    for (int i = 0; i < primes.size(); i++)
    {
        for (int j = i + 1; j < primes.size(); j++)
        {
            if (isMatch(primes[i], primes[j]))
            {
                arr[primes[i]].push_back(primes[j]);
                arr[primes[j]].push_back(primes[i]);
            }
        }
    }

    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        int n, m, a, b, cCount = 0;
        cin >> n >> m;
        for (int i = 0; i < 10003; i++)
        {
            dis[i] = -1;
            visi[i] = false;
        }
        bfs(n);
        if (dis[m]!=-1)
        {
            cout << dis[m] << "\n";
        }
        else
        {
            cout << "Impossible"<< "\n";
        }
        
    }
    return 0;
}