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
        int n;
        cin >> n;

        if (n == 1)
        {
            cout << 1 << "\n";
            cout << 1 << " " << 1 << "\n";
        }
        else
        {
            cout << (n / 2) << "\n";

            if ((n % 2) != 0)
            {
                cout << 3<< " " << 1<<" "<<2<<" "<<n << "\n";
            }
            else
            {
                cout << 2 << " " << 1<<" "<<2<<"\n";
            }
            
            for (int i = 1; i < (n / 2); i++)
            {
                cout << 2 << " " << ((i * 2) + 1)<<" "<<((i * 2) + 2)<<"\n";
            }
        }
    }
    return 0;
}