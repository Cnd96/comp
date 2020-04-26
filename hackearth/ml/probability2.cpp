// https://www.hackerearth.com/practice/machine-learning/prerequisites-of-machine-learning/basic-probability-models-and-rules/tutorial/
#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int main()
{
    double pct, pcnt, pot,ptt, N, one = 1,two=2, res;
    cin >> pct >> pot >> N;
    pcnt = one - pct;
    ptt=two/N;
    
    res=((pcnt*pot)+(pct*ptt));

    cout << fixed << setprecision(6) << res << endl;
    return 0;
}