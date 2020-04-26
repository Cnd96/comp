#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
#define mod 1000000007
//lj1
using namespace std;

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
       long long n,q,res=0,a,b,curr=0;
       cin>>n>>q;

       for (int i = 0; i < q; i++)
       {
           cin>>a>>b;

           if(b>a){
              if(curr<=a){
                  res+=(b-curr);
              }
              else
              {
                  res+=(curr-a);
                  res+=(b-a);
              }
              curr=b;
           }
           else 
           {
               if(curr>=a){
                   res+=(curr-b);
               }
               else
               {
                   res+=(a-curr);
                   res+=(a-b);
               }
               curr=b;   
           }
       }
       

        cout << res<< "\n";
    }
    return 0;
}
