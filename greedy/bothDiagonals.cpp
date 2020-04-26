#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int main()
{
    int n,rd=0,ld=0;
    cin >> n;
    int a;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a;
            if(i==j)rd+=a;
            if (((i*n)-(i-1))==(((i-1)*n+j)))ld+=a;
        }
    }
    int res=abs(rd-ld);
    cout <<res<< "\n";

    return 0;
}
