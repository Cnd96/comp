#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
#define mod 1000000007
//lj1
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        int arr[4];
        bool found = false;
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }
        int temp = (1 << 4);
        for (int i = 0; i < temp - 1; i++)
        {
            long long sum = 0;
            for (int j = 0; j < 4; j++)
            {
                if ((i & 1 << j) == 0)
                {
                    sum += arr[j];
                    // cout<<arr[j]<<" ";
                }
            }
            if (sum == 0) 
            {
                found = true;
                break;
            }
        }

        if (found)
        {
            cout <<"Yes"<< "\n";
        }
        else
        { 
            cout << "No"<<"\n";
        }
        
    }
    return 0;
}
