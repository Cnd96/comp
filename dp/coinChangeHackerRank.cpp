#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int main()
{
    long long n,m;
    cin>>n>>m;
    long long arr[m][n+1];
    long long arr1[m];

    for (int i = 0; i < m; i++)
    {
        cin>>arr1[i];
        arr[i][0]=1;
    }
    sort(arr1,arr1+m);

    for (int i = 0; i <=n; i++)
    {
        if(i%arr1[0]==0){
            arr[0][i]=1;
        }
        else
        {
            arr[0][i]=0;
        }
    }

    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if(j<arr1[i]){
                arr[i][j]=arr[i-1][j];
            }
            else
            {
                arr[i][j]=arr[i-1][j]+arr[i][j-arr1[i]];
            }
        }
    }


    cout<<arr[m-1][n]<<endl;
    
    

    return 0;
}
