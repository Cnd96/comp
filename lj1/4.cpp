#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;
#define mod 1000000007
#define ll unsigned long long
#define lim 26
const double PI = acos(-1.0);

bool arr[63];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        ll x, y, l, r, res;

        cin >> x >> y >> l >> r;
        res = (x | y);

        if (x == 0 || y == 0)
        {
            cout << 0 << "\n";
        }
        else
        {
             cout << res << "\n";
        }

       
    }
    return 0;
}