#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;
int countArr[1000001];
int coun=0;
bool sortcol(const vector<int> &v1,
             const vector<int> &v2)
{
    if(v1[1] != v2[1]){
        return v1[1] < v2[1];
    }
    else{
        return v1[2] < v2[2];
    }
    
}

bool arrangeAgain(const vector<int> &v1,
             const vector<int> &v2)
{
  
        return v1[0] < v2[0];
    
    
}

void add(int pos){
    countArr[pos]++;
    if(countArr[pos]==1){
        coun++;
    }
}

void remove(int pos){
    if(countArr[pos]>1){
        countArr[pos]--;
    }
    else if (countArr[pos]==1)
    {
       countArr[pos]--;
       coun--;
    }
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, d, left, right;
    cin >> n;
    int arr[n+1];
    
    
    memset(countArr,0,sizeof(countArr));
    for (int i = 1; i <= n; i++){
        cin >> arr[i];
    }
    cin >> d;

    vector<vector<int>> ddata;

    for (int i = 0; i < d; i++){
        cin >> left >> right;
        vector<int> temp;
        temp.push_back(i);
        temp.push_back(left);
        temp.push_back(right);
        temp.push_back(0);
        ddata.push_back(temp);
    }



    sort(ddata.begin(),ddata.end(),sortcol);

    for (int i = ddata[0][1]; i <= ddata[0][2]; i++)
    {
        add(arr[i]);
        ddata[0][3]=coun;
    }

    for (int i = 1; i < d; i++)
    {
        for (int j = ddata[i-1][1]; j < ddata[i][1]; j++)
        {
            remove(arr[j]);
        }
        
        for (int j = ddata[i-1][2]+1; j <= ddata[i][2]; j++)
        {
            add(arr[j]);
        }

        for (int j = ddata[i-1][2]; j > ddata[i][2]; j--)
        {
            remove(arr[j]);
        }
        ddata[i][3]=coun;
       
    }
     sort(ddata.begin(),ddata.end(),arrangeAgain);
    for (int i = 0; i < d; i++)
    {
         cout<<ddata[i][3]<<'\n';
    }
    
    return 0;
}


// 5
// 1 1 2 1 3
// 9
// 1 5
// 3 4
// 2 4
// 3 5
// 2 5
// 2 3
// 1 4
// 1 2
// 1 3