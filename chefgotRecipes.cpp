#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define mod 1000000007
#define ll long long
#define lim 32
int arr[lim];
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        ll n, res = 0;
        string s;
        cin >> n;
        memset(arr, 0, sizeof(arr));
        for (int i = 0; i < n; i++)
        {
            int temp = 0;
            cin >> s;
            if ((s.find("a") != string::npos))
                temp += 1;
            if ((s.find("e") != string::npos))
                temp += 2;
            if ((s.find("i") != string::npos))
                temp += 4;
            if ((s.find("o") != string::npos))
                temp += 8;
            if ((s.find("u") != string::npos))
                temp += 16;
            arr[temp]++;
        }

        for (int i = 0; i < lim; i++)
        {
            for (int j = i + 1; j < lim; j++)
            {
                if ((i | j) == (lim - 1))
                {
                    res += (arr[i] * arr[j]);
                }
            }
        }

        res+=(arr[31]*(arr[31]-1)/2);
        cout << res << "\n";
    }
    return 0;
}
// 2
// 3
// aaooaoaooa
// uiieieiieieuuu
// aeioooeeiiaiei
// 9
// aeide
// ouaeioaeiouklefj
// aeipp
// ouppp
// tyr
// ttt
// ouaeioaeiouklefj
// ouaeioaeiouklefj
// ouaeioaeiouklefj