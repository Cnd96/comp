
#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

bool canOr(unsigned long long n,long long k) 
{ 
    vector<long long> P; 
	while (n%2 == 0) 
	{ 
		P.push_back(2); 
		n /= 2; 
	} 

	for (long long i=3; i*i<=n; i=i+2) 
	{ 
		while (n%i == 0) 
		{ 
			n = n/i; 
			P.push_back(i); 
		} 
	} 
	if (n > 2) 
		P.push_back(n); 

	if (P.size() < k) return false;
   
    return true;
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        unsigned long long  x,k;
        cin >> x>>k;

        if(k==1){
            if(x>1){
                  cout << 1 << "\n";
            }
            else
            {
                  cout << 0 << "\n";
            }
        }
        else
        {
            if(canOr(x,k)){
                cout << 1 << "\n";
            }
            else
            {
               cout << 0 << "\n";
            }
        }
       
    }
    return 0;
}