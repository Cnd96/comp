// https://www.hackerearth.com/problem/algorithm/connected-components-in-a-graph/

#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

void dfs( vector<int> arr[],bool visi[],int i){
    visi[i]=true;
    for (int j= 0; j < arr[i].size(); j++)
    {
        if(visi[arr[i][j]]==false){
            dfs(arr,visi,arr[i][j]);
        }
    }
}

int main()
{
    int n,e,a,b,cCount=0;
    cin>>n>>e;
    vector<int> arr[n+1];

    bool visi[n+1];
    memset(visi, false, sizeof(visi));

    for (int i = 0; i < e; i++)
    {
        cin>>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }

    for (int i = 1; i <= n; i++)
    {
        if(visi[i]==false){
            dfs(arr,visi,i);
            cCount++;
        }
    }
    cout<<cCount<<endl;
    
    return 0;
}