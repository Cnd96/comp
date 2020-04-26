#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
#include <math.h>
using namespace std;
const double PI=acos(-1.0);
bool sortcol(const vector<double> &v1,
             const vector<double> &v2)
{
    return v1[0] > v2[0];
}

bool sortcol2(const vector<double> &v1,
             const vector<double> &v2)
{
    return v1[1] > v2[1];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        int n,k;
        double r,h,tw=2.,res=INT_MIN;
        vector<vector<double>> pdata;
        cin>>n>>k;
        

        for (int i = 0; i < n; i++)
        {
            cin>>r>>h;
            vector<double> temp;
            temp.push_back(r);
            temp.push_back(2.*r*h*PI);
            pdata.push_back(temp);
        }
        for (int i = 0; i < pdata.size()-(k-1); i++)
        {
            sort(pdata.begin(),pdata.end(),sortcol);
            sort(pdata.begin()+(i+1),pdata.end(),sortcol2);
            double temp=(PI*pdata[i][0]*pdata[i][0])+pdata[i][1];
            for (int j = 1; j < k; j++)
            {
                temp+=pdata[i+j][1];
            }
            res=max(res,temp);
        }
        cout<<"Case #"<<tt<<": "<<fixed<<setprecision(6)<<res<<endl;   
    }
    return 0;
}