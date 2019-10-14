#include <bits/stdc++.h>
using namespace std;

#define MOD ((int)1e9 + 7)

int n,a;

map <int, int> mp;

void add(int x)
{
	for (int i = 2; i*i <= x; ++i)
		if(x%i==0)
		{
			mp[i]++;
			while(x%i==0) x = x/i;
		}

	if(x > 1)
		mp[x]++;
}

int main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);

	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		cin >> a;
		add(a);
	}

	int ans = 0;
	
	for (auto i : mp)
		ans = (ans + i.first) % MOD;

	cout << ans << endl;
}