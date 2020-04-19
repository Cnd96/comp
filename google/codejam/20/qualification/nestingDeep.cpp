#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
#include <queue>
using namespace std;

int main()
{]
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        string s, jj;
        int openP = 0;
        cin >> s;

        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                while (openP > 0)
                {
                    jj.push_back(')');
                    openP--;
                }
                openP = 0;
                jj.push_back('0');
            }
            else
            {
                if (openP > 0)
                {
                    if ((s[i] - '0') < openP)
                    {
                        int closeOP = openP - (s[i] - '0');
                        for (int j = 0; j < closeOP; j++)
                        {
                            jj.push_back(')');
                        }
                        openP = (s[i] - '0');
                        jj.push_back(s[i]);
                    }
                    else
                    {
                        int newOp = (s[i] - '0') - openP;
                        for (int j = 0; j < newOp; j++)
                        {
                            jj.push_back('(');
                        }
                        openP = (s[i] - '0');
                        jj.push_back(s[i]);
                    }
                }
                else
                {
                    openP = s[i] - '0';
                    for (int j = 0; j < openP; j++)
                    {
                        jj.push_back('(');
                    }
                    jj.push_back(s[i]);
                }
            }
        }
        while (openP > 0)
        {
            jj.push_back(')');
            openP--;
        }

        cout << "Case #" << tt << ": " << jj << "\n";
    }
    return 0;
}

