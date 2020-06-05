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
ll arr[lim];
int main()
{
    
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        ll n,q,a,res;
        string s;
        cin>>n>>q>>s;
        memset(arr,0,sizeof(arr));
        

        for (int i = 0; i < s.size(); i++)
        {
            arr[(s[i]-'a')]++;
        }

        for (int i = 0; i < q; i++)
        {
            cin>>a;
            res=0;

            for (int j = 0; j < lim; j++)
            {
                if(a<arr[j]){
                    res+=arr[j]-a;
                }
            }
            cout<<res<<"\n";
            
        }
    }
    return 0;
}
