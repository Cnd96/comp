#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;
#define mod 1000000007
#define ll long long
#define lim 26
const double PI = acos(-1.0);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        int n, d;

        cin >> n >> d;
        ll arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n);

        if (d == 2)
        {
            bool matching = false;
            for (int i = 0; i < n - 1; i++)
            {
                if (arr[i] == arr[i + 1])
                {
                    matching = true;
                    break;
                }
            }
            if (matching)
            {
                cout << "Case #" << tt << ": 0"
                     << "\n";
            }
            else
            {
                cout << "Case #" << tt << ": 1"
                     << "\n";
            }
        }
        else if (d == 3)
        {
            bool threeMatching = false;
            bool twoMatching = false;
            for (int i = 0; i < n - 2; i++)
            {
                if (arr[i] == arr[i + 1] && arr[i] == arr[i + 2])
                {
                    threeMatching = true;
                    break;
                }
                if (arr[i] == arr[i + 1])
                {
                    twoMatching = true;
                }
            }

            if (threeMatching)
            {
                cout << "Case #" << tt << ": 0"
                     << "\n";
            }
            else if (twoMatching)
            {
                cout << "Case #" << tt << ": 1"
                     << "\n";
            }
            else
            {
                bool temp=false;
                for (int i = 0; i < n; i++)
                {
                    for (int j = i+1; j < n; j++)
                    {
                        if(arr[i]*2==arr[j])temp=true;
                    }
                    
                }

                if(temp){
                    cout << "Case #" << tt << ": 1"
                     << "\n";
                }
                else
                {
                    cout << "Case #" << tt << ": 2"
                     << "\n";
                }
                
                
            }
            
        }
    }
    return 0;
}