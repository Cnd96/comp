#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int dparr[amount+1];

        dparr[0]=0;

        for (int i = 1; i <= amount; i++)
        {
            dparr[i]=INT_MAX;
        }

        for (int i = 1; i <=amount; i++)
        {
            for (int j = 0; j < coins.size(); j++)
            {
                if((coins[j]>i)||(dparr[i-coins[j]]==INT_MAX))continue;

                dparr[i]=min(dparr[i],dparr[i-coins[j]]+1);
            }
        }
        
        if(dparr[amount]==INT_MAX) return -1;

        return dparr[amount];

    }
};