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
        long long n, a;
        cin >> n;
        long long lef = 0, rig = 0, tot = 0;
        bool left = true;
        bool cal = false;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            a=abs(a);

            if ((a % 2) == 1)
            {
                if (left)lef++;
                else rig++;
            }
            else
            {
                if (cal)
                {
                    long long x = lef * (lef + 1) / 2;
                    long long y = rig * (rig + 1) / 2;
                    long long all = (lef + rig + 1) * (lef + rig + 2) / 2;
                    tot += (all - x - y);
                    if ((a % 4) != 0)
                    {
                        cal = true;
                        lef = rig;
                        rig = 0;
                        left = false;
                    }
                    else
                    {
                        cal = false;
                        lef = 0;
                        rig = 0;
                        left = true;
                    }
                }
                else
                {
                    if ((a % 4) != 0)
                    {
                        cal = true;
                        left = false;
                    }
                    else
                    {
                        cal = false;
                        lef = 0;
                        rig = 0;
                        left = true;
                    }
                }
            }
        }

        if (cal)
        {
            long long x = lef * (lef + 1) / 2;
            long long y = rig * (rig + 1) / 2;
            long long all = (lef + rig + 1) * (lef + rig + 2) / 2;
            tot += (all - x - y);
        }
        tot=(n*(n+1)/2)-tot;
        cout <<tot << "\n";
    }
    return 0;
}


// 3
// 3
// 1 2 3
// 4
// 6 6 2 2 
// 7
// 2 -3 5 6 -7 9 10
