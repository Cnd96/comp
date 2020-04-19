#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        vector<long long> vec;
        long long n, a;
        long long res = 0;
        cin >> n;

        for (int i = 0; i < n; i++)
        {
            cin >> a;
            if (a > 0)
            {
                vec.push_back(a);
            }
        }
        sort(vec.begin(), vec.end(), greater<int>());


        for (int i = 0; i < vec.size(); i++)
        {
            if((vec[i]-i)<=0)break;

            res += vec[i]-i;
            res=res%1000000007;
        }
        cout <<res << "\n";
    }
    return 0;
}