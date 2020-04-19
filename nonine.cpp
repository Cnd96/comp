#include <bits/stdc++.h>

using namespace std;

int t;
long long f, l;

long long get(long long a) {
	long long ba = a % 10;
	a /= 10;
	long long x = 0, v = 1, sum = 0;
	while (a) {
		x += a % 10 * v;
		sum += a % 10;
		a /= 10;
		v *= 9;
	}
	long long re = x * 8;
	for (long long i = 0; i <= ba; i++)
		re += !!((sum + i) % 9);
	// printf("x %lld ba %lld re %lld > %lld\n", x, ba, x * 8, re);
	return re;
}

int main()
{
    cin>>f;
    cout<<get(f);

    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // int t;
    // cin >> t;
    // for (int tt = 1; tt <= t; tt++)
    // {
       

    //     cout << "Case #" << tt << ": "<< "\n";
    // }
    return 0;
}
