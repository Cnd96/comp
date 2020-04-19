#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

const int bb = 52;
int main()
{
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        unsigned long long n, m, sum = 0, tempSum, maxi;
        cin >> n >> m;
        unsigned long long arr[n];
        unsigned long long pdata[bb][2];
        string s(bb, '0');

        for (int i = 0; i < bb; i++)
        {
            pdata[i][0] = 0;
            pdata[i][1] = 0;
        }

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < bb; j++)
            {
                if ((arr[i] & (1LL << j)) == 0)
                {
                    pdata[j][0]++;
                }
                else
                {
                    pdata[j][1]++;
                }
            }
        }
        for (int i = 0; i < bb; i++)
        {
            sum += min(pdata[i][0], pdata[i][1]) * (1LL << i);
            if (pdata[i][1] < pdata[i][0])
            {
                s[bb - 1 - i] = '0';
            }
            else
            {
                s[bb - 1 - i] = '1';
            }
        }
        if (sum > m)
        {
            cout << "Case #" << tt << ": -1"
                 << "\n";
        }
        else
        {
            tempSum = sum;
            for (int i = bb - 1; i >= 0; i--)
            {
                if (s[i] == '0')
                {
                    sum -= min(pdata[i][0], pdata[i][1]) * (1LL << i);
                    sum += pdata[i][0] * (1LL << i);

                    if (sum > m)
                    {
                        sum = tempSum;
                    }
                    else
                    {
                        s[bb-1-i]='1';
                        tempSum = sum;
                    }
                }
            }
            maxi =stoull(s, nullptr, 2);
            cout << "Case #" << tt << ": " << maxi << "\n";
        }
    }
    return 0;
}