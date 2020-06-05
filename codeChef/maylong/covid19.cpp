#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;
#define mod 1000000007
//lj1
const double PI=acos(-1.0);

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        int n;
        cin>>n;
        int dis[n];
        vector<int> vec;

        cin>>dis[0];
        int curRes=1;

        for (int i = 1; i < n; i++)
        {
            cin>>dis[i];
            if(dis[i]>(dis[i-1]+2)){
                vec.push_back(curRes);
                curRes=1;
            }
            else
            {
                curRes++;
            }
        }
        if(curRes!=0)vec.push_back(curRes);
        
        sort(vec.begin(),vec.end());
       
        
        cout << vec[0]<<" "<<vec[vec.size()-1]<< "\n";
    }
    return 0;
}

