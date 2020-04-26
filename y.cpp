#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int arr[s.size()], zeroCount = 0, oneCount = 0;
    for (int i = 0; i < s.size(); i++)
    {
        arr[i] = s[i] - '0';
        if (arr[i])
            oneCount++;
        else
            zeroCount++;
    }
    int reZero = 0, resOne = oneCount, res , temp;

    if (arr[0])
    {
        resOne--;
    }
    else
    {
        reZero++;
    }
    res=resOne+reZero;

    for (int i = 1; i < s.size()-1; i++)
    {
        if (arr[i])
        {
            resOne--;
        }
        else
        {
            reZero++;
        }
        temp = resOne + reZero;
        res = max(res, temp);
    }

    cout << res << endl;

    return 0;
}
