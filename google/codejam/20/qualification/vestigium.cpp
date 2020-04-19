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
        int n, trace = 0, prows = 0, ccols = 0;
        cin >> n;
        int arr[n][n];
        set<int> jset;
        for (int i = 0; i < n; i++)
        {
            jset.clear();
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
                if (i == j)
                    trace += arr[i][j];
                jset.insert(arr[i][j]);
            }
            if (jset.size() != n)
                prows++;
        }
        for (int i = 0; i < n; i++)
        {
            jset.clear();
            for (int j = 0; j < n; j++)
            {
                jset.insert(arr[j][i]);
            }
            if (jset.size() != n)
                ccols++;
        }
        cout << "Case #" << tt << ": " << trace << " " << prows<<" "<<ccols << "\n";
    }
    return 0;
}
