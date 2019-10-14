#include <bits/stdc++.h>
using namespace std;

#define MOD ((int)1e9 + 7)

int n,ans;

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);

	cin >> n;

	for (int i = 1; i*i <= n; ++i)
		if(n%i==0)
		{
			if(i*i == n) // if i and n/i is equal add one of them
				ans = (ans + i) % MOD;
			else // different then add both of them
				ans = (ans + i + n/i) % MOD;
		}

	cout << ans << endl;
}