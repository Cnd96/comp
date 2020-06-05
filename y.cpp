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
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
		int res=0;
		string s;
		char c;
		cin>>s;
		int cur=2;

		for (int i = 0; i < s.size(); i++)
		{
			c=s[i];
			if(cur==2){
				if(c=='x')cur=1;
				else cur=0;
			}
			else if (cur==1)
			{
				if(c=='y'){
					cur=2;
					res++;
				}
			}
			else{
				if(c=='x'){
					cur=2;
					res++;
				}
			}
			
		}
		
        cout <<res<< "\n";
    }
    return 0;
}