#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int getC(int R,int C){
    if(R==1&&C==1)return 1;
    if(R==1)return 1;
    if(C==1)return 1;
    int arr[R][C];
    arr[R-1][C-1]=0;
    for (int i = 0; i < C-1; i++)
    {
        arr[R-1][i]=1;
    }
    for (int i = 0; i < R-1; i++)
    {
        arr[i][C-1]=1;
    }

    for (int i = C-2; i >=0; i--)
    {
        for (int j = R-2; j >=0; j--)
        {
            arr[j][i]=arr[j+1][i]+arr[j][i+1];
        }
    }

    return arr[0][0];
    
    
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        int R,C;
        cin>>R>>C;
       

        cout<<getC(R,C)<< "\n";
    }
    return 0;
}
