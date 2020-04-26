// https://www.codechef.com/problems/TILE
#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long
using namespace std;
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
	ll t,n;
	cin>>t;
	while(t--)
	{
        magic[0][0]=0,magic[0][1]=1, magic[1][0]=1, magic[1][1]=1;
		I[0][0]=1,I[0][1]=0,I[1][0]=0,I[1][1]=1;
		cin>>n;

        if(n==1){
            cout<<1<<endl;
        }
        else if (n==2)
        {
            cout<<2<<endl;
        }
        else 
        {
            matEXP(n-2);
            ll resul=(I[0][1]+I[1][1]*2)%mod;
            cout<<resul<<endl;
        }
	}
}