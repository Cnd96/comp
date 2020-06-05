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
        int e, n, dis, res = 0;
        string s;
        bool found = true;
        cin >> e >> n >> s;
        dis = e + n;

        if (dis != 0)
        {
            found = false;
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == 'S')
                {
                    n--;
                }
                else if (s[i] == 'N')
                {
                    n++;
                }
                
                if(s[i] == 'W'){
                    e--;
                }
                else if (s[i] == 'E')
                {
                    e++;
                }
                
                if ((i + 1) >= abs(e)+abs(n))
                {
                    found = true;
                    res = i+1;
                    break;
                }
            }
        }

        if (found)
        {
            cout << "Case #" << tt << ": "<<res << "\n";
        }
        else{
            cout << "Case #" << tt << ": IMPOSSIBLE"<< "\n";
        }
    }
    return 0;
}