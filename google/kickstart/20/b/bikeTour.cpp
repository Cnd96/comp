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

        int n,res=0;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n ; i++)
        {
            cin >> arr[i];
        }

        for (int i = 1; i < n-1; i++)
        {
            if(arr[i]>arr[i-1]&&arr[i]>arr[i+1])res++;
        }
        

        cout << "Case #" << tt << ": "<<res<< "\n";
    }
    return 0;
}