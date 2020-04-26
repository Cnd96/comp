#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;
//lj1st
#define mod 1000000007
#define ll long long
#define lim 32

int main()
{
 

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        int n,s,fmin=10000,dmin=10000;
        cin>>n>>s;
        bool bl[n];
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            cin>>bl[i];
            if(bl[i]){
                fmin=min(fmin,arr[i]);
            }
            else 
            {
                dmin=min(dmin,arr[i]);
            }
        }

        s+=(fmin+dmin);
        if(s>100){
            cout <<"no"<< "\n";
        }
        else
        {
             cout <<"yes"<< "\n";
        }
        
        
        

        
    }
    return 0;
}