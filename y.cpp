#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;



int main()
{

    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        int b, a;
        cin >> b;
        string s;
        bool arr[b];
        vector<int> samevec;
        vector<int> difvec;
        int c1, c2;
        string  y;

        int queryC = 0;
        int ind = 1;
        for (int i = 1; i <= 10; i++)
        {
            cout<<i<<endl;
            cin>>arr[i-1];
        }
        
        for (int i = 0; i < b; i++)
        {
            s += to_string(arr[i]);
        }

        cout << s<< "\n";
        cin>>y;
    }
    return 0;
}
