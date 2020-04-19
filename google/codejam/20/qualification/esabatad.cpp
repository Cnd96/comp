#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;



int main()
{

    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        int b, a;
        cin >> b;
        string s;
        bool arr[b];
        vector<int> samevec;
        vector<int> difvec;
        int c1, c2;
        char y;
        int queryC = 0;
        int ind = 1;
        while (1)
        {
            if ((queryC > 1) && ((queryC % 10) == 0))
            {
                if(samevec.size()>0){
                    cout<<(samevec[0]+1)<< "\n";
                    cin>>c1;
                    if(c1!=arr[samevec[0]]){
                        for (int j = 0; j < samevec.size(); j++)
                        {
                            arr[samevec[j]]=!(arr[samevec[j]]);
                            arr[(b-(samevec[j]+1))]=!(arr[(b-(samevec[j]+1))]);
                        }
                    }
                }else
                {
                    cout<<1<< "\n";
                    cin>>c1;
                }
                
                if(difvec.size()>0){
                    cout<<(difvec[0]+1)<< "\n";
                    cin>>c1;
                     if(c1!=arr[difvec[0]]){
                        for (int j = 0; j < difvec.size(); j++)
                        {
                            arr[difvec[j]]=!(arr[difvec[j]]);
                            arr[(b-(difvec[j]+1))]=!(arr[(b-(difvec[j]+1))]);
                        }
                    }
                }
                else
                {
                    cout<<1<< "\n";
                    cin>>c1;
                }
                queryC+=2;
            }

            a = ind;
            cout << a<< "\n";
            cin >> c1;
            arr[a - 1] = c1;
            a = (b - (ind - 1));
            cout << a<< "\n";
            cin >> c2;
            arr[a - 1] = c2;
            if (c1 == c2)
            {
                samevec.push_back(ind - 1);
            }
            else
            {
                difvec.push_back(ind - 1);
            }
            queryC+=2;
            ind++;

            if(ind>(b/2)){
                break;
            }
            
        }
        for (int i = 0; i < b; i++)
        {
            s += to_string(arr[i]);
        }

        cout << s<< "\n";
        cin>>y;
    }
    return 0;
}
