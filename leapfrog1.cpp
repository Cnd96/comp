#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;
#define mod 1000000007
#define ll long long
#define lim 26
const double PI=acos(-1.0);


int main()
{
    freopen("aa.in", "r", stdin);
    freopen("aa.out", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        string n;
        ll count=0;
        cin>>n;
        for (int i = 1; i < n.length(); i++)
        {
            if(n[i]=='B')count++;
        }
        if(((n.length())/2)>count||((n.length())-1)==count)cout << "Case #" << tt << ": N"<< "\n";
        else cout << "Case #" << tt << ": Y "<< "\n";
    }
    return 0;
}