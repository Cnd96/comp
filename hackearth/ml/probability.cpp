// https://www.hackerearth.com/practice/machine-learning/prerequisites-of-machine-learning/basic-probability-models-and-rules/tutorial/
#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int main()
{
    double pmb,pab,pr,pmt,pat,one=1,res;
    cin>>pmb>>pab>>pr;
    pmt=one-pmb;
    pat=one-pab;

    res=pr*(one-((pmb*pab)+(pmt*pat)));

    cout<<fixed<<setprecision(6)<<res<<endl;
    return 0;
}