
#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;
long long pData[1000000];
vector<long long> diffArr;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        int n, k;
        bool noOfmatches = false;
        cin >> n >> k;
        memset(pData, 0, sizeof(pData));
        diffArr.clear();
        cin >> pData[0];
        for (int i = 1; i < n; i++)
        {
            cin >> pData[i];
            diffArr.push_back((pData[i] - pData[i - 1]));
        }
        sort(diffArr.begin(),diffArr.end(),greater<long long>());

        diffArr[0]=(diffArr[0]+1)/2;
        if(diffArr.size()>1){
             cout << "Case #" << tt << ": " <<max(diffArr[0],diffArr[1])<< "\n";
        }
        else
        {
            cout << "Case #" << tt << ": " <<diffArr[0]<< "\n";
        }
        
    }
    return 0;
}