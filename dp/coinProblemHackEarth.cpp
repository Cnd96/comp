#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;
//lj1st
#define mod 1000000007
#define ll unsigned long long
#define lim 100005


int c=0;

int arr[1000002][3];

ll getA(int n, int t)
{
    c++;
    if (n == 0)return 1;

    if(arr[n][t]!=-1)return arr[n][t];

    ll x = 0;
    if (t < 2)
    {
        x = getA(n - 1, (t+1));
    }
    

    ll y = getA(n - 1, 0);

    return arr[n][t]= ((x + y)%mod);
}
// ll getA(int n, int t)
// {
//     c++;
//     if (n == 0)return 1;

//     ll x = 0;
//     if (t < 2)
//     {
//         x = getA(n - 1, (t+1));
//     }
    

//     ll y = getA(n - 1, 0);

//     return x + y;
// }
int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < 1000002; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            arr[i][j]=-1;
        }
        
    }
    

    ll ans=getA(n,0);
    cout << ans<<" "<<c;

    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // int t;
    // cin >> t;
    // for (int tt = 1; tt <= t; tt++)
    // {
    //     int n;

    //     cin>>n;

    //     cout<<arr[n]<<"\n";
    // }
    return 0;
}