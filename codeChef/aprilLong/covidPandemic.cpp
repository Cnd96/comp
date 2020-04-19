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
        string s = "YES";
        bool x = false;
        int n, startIndex;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if ((arr[i] == 1) && (!x))
            {
                x = true;
                startIndex = i;
            }
        }
       
        if (startIndex == n - 1)
        {
            cout << s << "\n";
        }
        else
        {
            int tempi = startIndex+1;
            for (int i = tempi; i < n; i++)
            {
                if (arr[i] == 1)
                {
                    if((i-startIndex)<6){
                        s="NO";
                        break;
                    }
                    else
                    {
                        startIndex=i;
                    }
                }
            }
             cout << s  << "\n";
        }
    }
    return 0;
}