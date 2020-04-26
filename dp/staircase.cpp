// https://www.codechef.com/problems/JAM11
#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;


long long getWays(int n){
    if(n==1)return 1;
    if(n==2)return 2;
    if(n==3)return 4;

    long long arr[n];
    arr[0]=1;
    arr[1]=2;
    arr[2]=4;

    for (int i = 3; i < n; i++)
    {
        arr[i]=(arr[i-3]+arr[i-2]+arr[i-1])%1000000007;
    }
    return arr[n-1];
}

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
        cout << getWays(n)<< "\n";
    }
    return 0;
}