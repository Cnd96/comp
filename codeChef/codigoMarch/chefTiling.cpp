#include "bits/stdc++.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;
#define mod 1000000007
#define ll long long
ll magic[2][2];
ll I[2][2];

void mul(ll mat1[][2],ll mat2[][2])
{
	ll res[2][2];
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++)
		{
			res[i][j]=0;
			for(int k=0;k<2;k++)
			{
				res[i][j]=((res[i][j])%mod+((mat1[i][k]%mod)*(mat2[k][j]%mod))%mod)%mod;
			}
		}
	}
	
	for(int i=0;i<2;i++)
	for(int j=0;j<2;j++)
	mat1[i][j]=res[i][j];
}
void matEXP(ll n)
{
  while(n)
  {
	if(n%2)
	mul(I,magic), n--;
	else
	mul(magic,magic) , n/=2;	
  }
}

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        ll n;
        cin >> n;
        magic[0][0]=0,magic[0][1]=2, magic[1][0]=1, magic[1][1]=2;
		I[0][0]=1,I[0][1]=0,I[1][0]=0,I[1][1]=1;

        if(n==1){
            cout<<2<<endl;
        }
        else if (n==2)
        {
            cout<<6<<endl;
        }
        else 
        {
            matEXP(n-2);
            ll resul=((I[0][1]*2)%mod+(I[1][1]*6)%mod)%mod;
            cout<<resul<<endl;
        }
    }
    return 0;
}