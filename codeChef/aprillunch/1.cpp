#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;
//lj1st
#define mod 1000000007
#define ll long long
#define lim 32

ll arr[100005];
vector<ll> v[100005];

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        ll n, k;
        cin >> n >> k;

        for (int i = 0; i < 100005; i++)
        {
            arr[i] = 0;
            v[i].clear();
        }

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
            if (i % k == 0)
            {
                v[k].push_back(arr[i]);
            }
            else
            {
                v[i % k].push_back(arr[i]);
            }
        }
        bool found = true;

        for (int i = 1; i <= k; i++)
        {
            sort(v[i].begin(), v[i].end());
        }

        vector<int> sol;
        for (int i = 1; i <= ((n / k) + 1); i++)
        {
            for (int j = 1; j <= k; j++)
            {
                if (v[j].size() >= i)
                    sol.push_back(v[j][i - 1]);
            }
        }

        // for (int i = 0; i < sol.size(); i++)
        // {
        //     cout << sol[i] << " ";
        // }

        for (int i = 0; i < sol.size() - 1; i++)
        {
            if (sol[i] > sol[i + 1])
            {
                found = false;
            }
        }

        if (found)
        {
            cout << "yes"<< "\n";
        }
        else
        {
             cout << "no"<< "\n";
        }

        // if (k == 1)
        // {
        //     cout << "yes"
        //          << "\n";
        // }
        // else
        // {

        // }
    }
    return 0;
}

// 1
// 7 3
// 7 4 2 3 5 1 1

// 3
// 4 1
// 1 4 2 3
// 4 2
// 1 4 2 3
// 7 3
// 7 4 2 3 5 1 1
