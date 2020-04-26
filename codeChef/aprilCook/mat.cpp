#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
#define mod 1000000007
//lj1
using namespace std;

unsigned long long  powe(unsigned long long a, unsigned long long n)
{
    unsigned long long res = 1;

    while (n)
    {
        if(n%2){
            res*=a;
            res%=mod;
            n--;
        }
        else
        {
            a=a*a;
            a%=mod;
            n/=2;
        }   
    }
    
    return res;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        unsigned long long n, a, cur, res, temp;
        cin >> n >> a;
        cur = a * a;
        res = a;

        for (unsigned long long i = 2; i <= n; i++)
        {
            cur %= mod;
            temp = powe(cur,(2 * i - 1));
            temp %= mod;
            cur *= (temp);
            res += temp;
            res %= mod;
        }
        cout << res << "\n";
    }
    return 0;
}
